#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Spawn.h>
#include <signal.h>
#include <termios.h>
#include <stdio.h>
#include <iostream>


#define speed 2.0;
#define KEYCODE_SPACE 0x20
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
    ros::Publisher motor_vel = node.advertise<geometry_msgs::Twist>("rosaria/cmd_vel", 1);
 //   ros::Publisher motor_vel = node.advertise<geometry_msgs::Twist>("cmd_vel",1);
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
    geometry_msgs::Twist twist;
    twist.angular.z = 0.0;
    twist.linear.x = 0.0;
    float a_scale_ = 0.5;
    float l_scale_  = 0.5;

    puts("Reading from keyboard");
    puts("---------------------------");
    puts("Press w a s d  keys to move the Robot.");
    puts("Press the space keys to stop the Robot.");
   // ROS_WARN("test");

    for(;;)
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
             //   ROS_INFO("UP");
                dirty = true;
                break;
            }
            case 's':{
                vel_msg.linear.x = -0.05 * speed;
                vel_msg.angular.z = 0;
              //  ROS_INFO("DOWN");
                dirty = true;
                break;
            }
            case 'a':{
                vel_msg.linear.x = 0;
                vel_msg.angular.z = -0.05 * speed;
            //    ROS_INFO("LEFT");
                dirty = true;
                break;
            }
            case 'd':{
                vel_msg.linear.x = 0;
                vel_msg.angular.z = 0.05 * speed;
            //    ROS_INFO("RIGHT");
                dirty = true;
                break;
            }
            case KEYCODE_SPACE:{
            		ROS_DEBUG("STOP");
            		vel_msg.linear.x = 0;
            		vel_msg.angular.z = 0;
            		twist.angular.z = 0.0;
            		twist.linear.x = 0.0;
            		dirty = true;
            		break;
            }
            default: {
                    ROS_DEBUG("STOP");
                    vel_msg.linear.x = 0;
                    vel_msg.angular.z = 0;
                    twist.angular.z = 0.0;
                    twist.linear.x = 0.0;
                    dirty = true;
                    break;
            };
        }
        twist.angular.z += a_scale_ * vel_msg.angular.z ;
	if (twist.linear.x >= 0.2 && vel_msg.linear.x > 0) {
		twist.linear.x = 0.2;
	}
	else if (twist.linear.x <= -0.1 && vel_msg.linear.x < 0){
		twist.linear.x	= -0.1;
	}
	else {
		twist.linear.x += l_scale_*vel_msg.linear.x;
	}
        if ( dirty == true )
        {
		std::cout << twist.linear.x << " " << twist.angular.z << std::endl;
            motor_vel.publish(twist);
            dirty = false;
        }
    }
    return 0;

}
