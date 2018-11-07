#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Spawn.h>
#include <signal.h>
#include <termios.h>
#include <stdio.h>


#define speed 1.0;
struct termios cooked, raw;
int kfd = 0;


void quit(int sig)
{
  (void)sig;
  tcsetattr(kfd, TCSANOW, &cooked);
  ros::shutdown();
  exit(0);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "motor_broadcast");
    ros::NodeHandle node;
    ros::Publisher motor_vel = node.advertise<geometry_msgs::Twist>("motor/cmd_vel", 1);

    ros::Rate loop_rate(10);

    char c; 
    bool dirty = false;

    signal(SIGINT,quit);

    // get the console in raw mode                                                              
    tcgetattr(kfd, &cooked);
    memcpy(&raw, &cooked, sizeof(struct termios));
    raw.c_lflag &=~ (ICANON | ECHO);
    // Setting a new line, then end of file                         
    raw.c_cc[VEOL] = 1;
    raw.c_cc[VEOF] = 2;
    tcsetattr(kfd, TCSANOW, &raw);

    puts("Reading from keyboard");
    puts("---------------------------");
    puts("Use arrow keys to move the Robot.");

    while ( 1 )
    {
        geometry_msgs::Twist vel_msg;
        if(read(kfd, &c, 1) < 0)
        {
            perror( "read():" );
            exit( -1 );
        }
        switch ( c )
        {
            case 'w':{
                vel_msg.linear.x = 0.05 * speed;
                vel_msg.angular.z = 0;
                ROS_INFO("UP");
                dirty = true;
                break;
            }
            case 's':{
                vel_msg.linear.x = -0.05 * speed;
                vel_msg.angular.z = 0;
                ROS_INFO("DOWN");
                dirty = true;
                break;
            }
            case 'a':{
                vel_msg.linear.x = 0;
                vel_msg.angular.z = -0.1 * speed;
                ROS_INFO("LEFT");
                dirty = true;
                break;
            }
            case 'd':{
                vel_msg.linear.x = 0;
                vel_msg.angular.z = 0.1 * speed;
                ROS_INFO("RIGHT");
                dirty = true;
                break;
            }
           case 'q':{
		vel_msg.linear.x = 0;
                vel_msg.angular.z = 0;
                ROS_INFO("STOP");
                dirty = true;
                break;
	   }
            case 'c':{
                return 1;
            }
            default: break;
        }
        if ( dirty == true )
        {
            motor_vel.publish(vel_msg);
            dirty = false;
        }
    }
    return 0;

}
