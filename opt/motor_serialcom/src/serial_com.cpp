/*********************************************************************
 * Software License Agreement (BSD License)
 * Copyright (c) 2013, Intelligent Robotics Lab, DLUT.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. and Intelligent Robotics 
 *        Lab, DLUT nor the names of its contributors may be used to endorse or
 *       promote products derived from this software without specific prior written 
 *       permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "motor_serialcom/Velocity.h"
//#include "dlut_move_base/Twist.h"

//the serial port
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <stdlib.h>

//#define DEFAULT_PORT 6
#define DEFAULT_PORT 1
//#define DEFAULT_BAUDRATE 115200
#define DEFAULT_BAUDRATE 9600
#define MAX_BUF 1024
typedef unsigned char BYTE;
typedef unsigned short int WORD;

#define CRC16_GEN_POL 0xa001
#define MKSHORT(a,b) ((unsigned short) (a) | ((unsigned short)(b) << 8))
#include <tf/transform_broadcaster.h>
#include <nav_msgs/Odometry.h>

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class SerialCom
{
public:
  SerialCom();
  ~SerialCom();
  int openPort(int fd, int comport);
  int setOpt(int fd,int nspeed,int nbits,char nevent,int nstop);
  int packSend(int fd,char ptr,char buff[]);
  void velocityCallBack(const geometry_msgs::Twist &vel);//send the control cmd to the port by Velocity
  int comInit();
  void SetBuf(char* buf,bool change/* =false */,bool addCRC/*=false*/);
  void sendcommand(const ros::TimerEvent &);
  ros::NodeHandle serial_node_handle_;
  ros::Subscriber vel_sub;
  ros::Publisher OdometryMsg;
  ros::NodeHandle n;
private:
  int fd_;//the file discriptor of the serial port
  ros::Subscriber sub_cmd_vel_; 
  char _buf[MAX_BUF+3];//传输data，中间值
  char _begin[30];
  char _end[30];
  char _cmdID[30];
  char command_buff_[30];
  char _crc[10];
  char _command[30];
  char trans_cmd[30];
  unsigned char CRC_H,CRC_L;		
  int _len;
  int count;
  int port_,baudrate_;
  ros::Time current_time_,last_time_;
  int nwrite;
  double v1,v2,r;
  int vel_l,vel_r;
  geometry_msgs::Twist OdomVel;
  char hex[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
public:	
  void SetBuf(char* buf,int len,bool change,bool addCRC);
  void Clear();
  char* GetBuf();
  char* GetContinueBuf();	//ŒŽ»ñµÃpacketµÄ_bufµÄµ±Ç°ŒÌÐøÎ»ÖÃ _buf[_len];
  int getLen();
  void setLen(int len);	//É÷ÓÃ
  void setContinue(int len);	//_len=_len+len É÷ÓÃÖ®
  WORD CRC16(unsigned char *p,WORD len);
  WORD app_protocol_uart_crc16( BYTE *ptr, int len );

//»ñµÃ×Ö·ûŽ®£¬hex=trueÔò»ñµÃÊ®ÁùœøÖÆÐÎÊœ£¬·ñÔò»ñµÃ×Ö·ûŽ®
  string  GetString(bool hex=false);

//»ñµÃµÄ×Ö·ûŽ®Œä£¬Ã¿Áœžö×Ö·ûŽ®žôÒ»žö¿ÕžñÈç£º"12 34"
//hex=trueÔò»ñµÃÊ®ÁùœøÖÆÐÎÊœ£¬·ñÔò»ñµÃ×Ö·ûŽ®
  string GetModifyString(bool hex=false);
//²úÉúÊ®ÁùÎ»µÄCRCÂë
//²úÉú¶àÏîÊœÎª£ºx16 + x15 + x2 + 1
  static WORD CreatCrc(BYTE* data,int len );
 
  bool operator==(SerialCom& in);
};

const WORD crc_ta[256] = { /* CRC余式表 */
   0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7,
    0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef,
    0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6,
    0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de,
    0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485,
    0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d,
    0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4,
    0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc,
    0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823,
    0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b,
    0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12,
    0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a,
    0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41,
    0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49,
    0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70,
    0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78,
    0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f,
    0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067,
    0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e,
    0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256,
    0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d,
    0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
    0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c,
    0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634,
    0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab,
    0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3,
    0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a,
    0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92,
    0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9,
    0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1,
    0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8,
    0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0
};




SerialCom::SerialCom()
{
  serial_node_handle_.param("Port",port_,DEFAULT_PORT);
  serial_node_handle_.param("BaudRate",baudrate_,DEFAULT_BAUDRATE);
  comInit();
  strcpy(command_buff_, "00 00 00 00 00 00 00 00 ");
  v1=0;v2=0;
  count = 0;
  vel_sub = n.subscribe("motor/cmd_vel", 1, &SerialCom::velocityCallBack, this);
  OdometryMsg = n.advertise<geometry_msgs::Twist>("odom_vel", 10);
  
  //ROS_INFO("data_number:%d\n",nwrite);
  
}

SerialCom::~SerialCom()
{
  close(fd_);
}

//open the serial port
int SerialCom::openPort(int fd, int comport)
{
  if(comport == 1)//port 1
  {
    //fd = open("/dev/ttyS0",O_RDWR|O_NOCTTY|O_NDELAY);
    //fd = open("/dev/bus/usb/003/007",O_RDWR|O_NOCTTY|O_NDELAY);
    fd = open("/dev/ttyUSB0",O_RDWR|O_NOCTTY|O_NDELAY);
    
    if(-1  ==  fd)
    {
      ROS_INFO("failed to open port 1！");
      return(-1);
    }
  }
  else if(comport == 2)//port 2
  {
    fd = open("/dev/ttyS1",O_RDWR|O_NOCTTY|O_NDELAY);
    if(-1 == fd)
    {
      ROS_INFO("failed to open port 2！");
      return(-1);
    }
  }
  else if(comport == 3)//port 3
  {
    fd = open("/dev/ttyS2",O_RDWR|O_NOCTTY|O_NDELAY);

    if(-1 == fd)
    {
      ROS_INFO("failed to open port 3！");
      return(-1);
    }
  }
else if(comport == 4)//port 4
  {
    fd = open("/dev/ttyS3",O_RDWR|O_NOCTTY|O_NDELAY);

    if(-1 == fd)
    {
      ROS_INFO("failed to open port 3！");
      return(-1);
    }
  }
else if(comport == 5)//port 5
  {
    fd = open("/dev/ttyS4",O_RDWR|O_NOCTTY|O_NDELAY);

    if(-1 == fd)
    {
      ROS_INFO("failed to open port 3！");
      return(-1);
    }
  }
  else if(comport == 6)//port 6
  {
    fd = open("/dev/ttyS5",O_RDWR|O_NOCTTY|O_NDELAY);

    if(-1 == fd)
    {
      ROS_INFO("failed to open port 6！");
      return(-1);
    }
  }
    //新转接口用0口
  else if(comport == 0)//port 3
  {
      fd = open("/dev/serial/by-path/pci-0000:00:14.0-usb-0:3.3:1.0",O_RDWR|O_NOCTTY|O_NDELAY);

    if(-1 == fd)
    {
      ROS_INFO("failed to open port pci！");
      return(-1);
    }
  }

  if(fcntl(fd,F_SETFL,0)<0)
    ROS_INFO("fcntl failed!");
  else
    ROS_INFO("fcntl=%d.",fcntl(fd,F_SETFL,0));

  if(isatty(STDIN_FILENO) == 0)
    ROS_INFO("standsrd input is not a terminal device.");
  else
    ROS_INFO("is a tty sucess.");

  ROS_INFO("the return value of the serial open function=%d，!=-1,indicates succeed to open the serial.",fd);

  return fd;
}

//setup the serial port
int SerialCom::setOpt(int fd,int nspeed,int nbits,char nevent,int nstop)
{
  struct termios newtio,oldtio;

  //check the parameter of the serial port to see whether there is error or not
  if(tcgetattr(fd,&oldtio) != 0)
  {
    ROS_INFO("failed to setup the serial，failed to save the serial value!");
    return -1;	
  }

  bzero(&newtio,sizeof(newtio));

  newtio.c_cflag |= CLOCAL | CREAD;
  newtio.c_cflag &= ~CSIZE;

  switch(nbits)
  {
    case 7:
      newtio.c_cflag |= CS7;
      break;
    case 8:
      newtio.c_cflag |= CS8;
      break;	
  }

  switch(nevent)
  {
    case 'O': 
      newtio.c_cflag |= PARENB;
      newtio.c_cflag |= PARODD;
      newtio.c_iflag |= (INPCK | ISTRIP);
      break;
    case 'E':
      newtio.c_iflag |= (INPCK | ISTRIP);
      newtio.c_cflag |= PARENB ;
      newtio.c_cflag &= ~ PARODD;
      break;
    case 'N':
      newtio.c_cflag &= ~ PARENB;
      break;
  }

  //setup the baud rate
  switch(nspeed)
  {
    case 2400:
      cfsetispeed(&newtio,B2400);
      cfsetospeed(&newtio,B2400);
      break;		
    case 4800:
      cfsetispeed(&newtio,B4800);
      cfsetospeed(&newtio,B4800);
      break;	
    case 9600:
      cfsetispeed(&newtio,B9600);
      cfsetospeed(&newtio,B9600);
      break;	
    case 19200:
      cfsetispeed(&newtio,B19200);
      cfsetospeed(&newtio,B19200);
      break;	
    case 38400:
      cfsetispeed(&newtio,B38400);
      cfsetospeed(&newtio,B38400);
      break;
    case 57600:
      cfsetispeed(&newtio,B57600);
      cfsetospeed(&newtio,B57600);
      break;		
    case 115200:
      cfsetispeed(&newtio,B115200);
      cfsetospeed(&newtio,B115200);
      break;	
    case 460800:
      cfsetispeed(&newtio,B460800);
      cfsetospeed(&newtio,B460800);
      break;	
    default:
      cfsetispeed(&newtio,B9600);
      cfsetospeed(&newtio,B9600);
      break;		
  }

  //setup the stop bit
  if(nstop == 1)
    newtio.c_cflag &= ~ CSTOPB;
  else if(nstop == 2)
    newtio.c_cflag |= CSTOPB;

  //setup the waitting time and the minimum amount of the characters received 
  newtio.c_cc[VTIME] = 0;
  newtio.c_cc[VMIN] = 0;

  //deal with the characters which were not received.
  tcflush(fd,TCIFLUSH);

  //activate the new serial setup
  if((tcsetattr(fd,TCSANOW,&newtio))!=0)
  {
    ROS_INFO("failed to activate the new serial setup！");
    return -1;
  }

  ROS_INFO("serial setup success!\n");

  return 0;
}

/*
void SerialCom::velocityCallBack(const geometry_msgs::Twist &vel)
{
  char pl[10];
  char pr[10];
  
  if(fabs(vel.linear.x)<0.001&&fabs(vel.linear.y)<0.001&&fabs(vel.angular.z)<0.001)
    { //ROS_INFO(" motor 0");
    }
  //ROS_INFO("linear: [%f] angular: [%f].",vel.linear,vel.angular);	
  
  //ROS_INFO("pl: [%s] pr: [%s].",pl,pr);
  command_buff_[0]='\0';
  r=0.39;
  v1=(2 * int(vel.linear.x/abs(vel.linear.x)) * hypot(vel.linear.x,vel.linear.y) - r * vel.angular.z)/2;
  v2=(2 * int(vel.linear.x/abs(vel.linear.x)) * hypot(vel.linear.x,vel.linear.y) + r * vel.angular.z)/2;
 if(abs(v1)==0&&abs(v2)==0)
    {//ROS_INFO("motor 2 = 0");
    }
  //ROS_INFO("v1 = %f",v1);
  //ROS_INFO("v2 = %f",v2);
  //v1=(2 * vel.linear.x - r * vel.angular.z)/2;
  //v2=(2 * vel.linear.x + r * vel.angular.z)/2;
    
  if(v1==0&&v2>0){
  v1=-0.001;
  ROS_INFO("v1==0,v2>0");
 }
  if(v1>0&&v2==0){
  v2=-0.001;
  ROS_INFO("v1>0,v2==0");
  }
  if(v1==0&&v2<0){
  v1=0.001;
      ROS_INFO("v1==0,v2<0");
  }
  if(v1<0&&v2==0){
  v2=0.001;
      ROS_INFO("v1<0,v2==0");
  }
  //ROS_INFO("字符串 v1: [%s] v2: [%s].",gcvt(v1,6,pl),gcvt(v2,6,pr));
//strcpy(command_buff_,"10");
  if(v1>=0&&v2>=0)
  {
	//command_buff_[0]='1';
	//command_buff_[1]='0';
	strcpy(command_buff_,"01");
  }
  if(v1>=0&&v2<=0)
  {
	//command_buff_[0]='1';
	//command_buff_[1]='1';
	strcpy(command_buff_,"00");
  }
  if(v1<=0&&v2>=0)
  {
	//command_buff_[0]='0';
	//command_buff_[1]='0';
	strcpy(command_buff_,"11");
  }
  if(v1<=0&&v2<=0)
  {
	//command_buff_[0]='0';
	//command_buff_[1]='1';
	strcpy(command_buff_,"10");
  }
  
  
  //strcpy(command_buff_,"00");
  vel_l=int(abs(v1*4500));
  vel_r=int(abs(v2*4500));
  if(vel_l>2500||vel_r>2500)
   {  ROS_INFO("vel>3000");}
  if(vel_l==0 || vel_r==0)
  { //ROS_INFO("vel_LR == 0");
  }
  //ROS_INFO("linear: [%f] angular: [%f].",vel.linear,vel.angular);	
  //ROS_INFO("linear: [%f] angular: [%f].",vel.linear,vel.angular);	
  //ROS_INFO("vel_l = %d",vel_l);
 
  if(vel_r <= 500)
  {
  //ROS_INFO("vel_r = %d",vel_r);
  }
  //ROS_INFO("vel_l and vel_r: %d and %d",vel_l,vel_r);
  
  int temp;
  temp=(vel_l/256)/16;
  command_buff_[2]=hex[temp];
  temp=(vel_l/256)%16;
  
  command_buff_[3]=hex[temp];
  temp=(vel_l%256)/16;
  command_buff_[4]=hex[temp];
  temp=(vel_l%256)%16;
  command_buff_[5]=hex[temp];
//ROS_INFO("temp%d  ",temp);
  temp=(vel_r/256)/16;
  command_buff_[6]=hex[temp];
  temp=(vel_r/256)%16;
  command_buff_[7]=hex[temp];
  temp=(vel_r%256)/16;
  command_buff_[8]=hex[temp];
  temp=(vel_r%256)%16;
  command_buff_[9]=hex[temp];
  
  int temp;
  temp=(vel_l/256)/16;
  command_buff_[0]=hex[temp];
  temp=(vel_l/256)%16;
  command_buff_[1]=hex[temp];
  temp=(vel_l%256)/16;

  command_buff_[2]=hex[temp];
  temp=(vel_l%256)%16;
  command_buff_[3]=hex[temp];
//ROS_INFO("temp%d  ",temp);
  temp=(vel_r/256)/16;
  command_buff_[4]=hex[temp];
  temp=(vel_r/256)%16;
  command_buff_[5]=hex[temp];
  temp=(vel_r%256)/16;
  command_buff_[6]=hex[temp];
  temp=(vel_r%256)%16;
  command_buff_[7]=hex[temp];
  command_buff_[8]= '\0';
  strcat(command_buff_,"00000000");
  command_buff_[16]='\0';
  
  //packSend(fd_,'v',pl);//send the value of the velocity
  //packSend(fd_,'w',pa);//send the value of the angular velocity
  
  //ROS_INFO("command_buff_:%s",command_buff_);
  
}
*/

void SerialCom::velocityCallBack(const geometry_msgs::Twist &vel)
{
  count = 0;
  command_buff_[0]='\0';
  r=0.155;
  //v1=(2 * int(vel.linear.x/abs(vel.linear.x)) * hypot(vel.linear.x,vel.linear.y) - r * vel.angular.z)/2;
  //v2=(2 * int(vel.linear.x/abs(vel.linear.x)) * hypot(vel.linear.x,vel.linear.y) + r * vel.angular.z)/2;

  v1 = vel.linear.x - r * vel.angular.z;
  v2 = vel.linear.x + r * vel.angular.z;
  OdomVel.linear.x = vel.linear.x;
  OdomVel.angular.z = vel.angular.z;

  if(v1==0&&v2>0){
  v1=-0.001;
  ROS_INFO("v1==0,v2>0");
 }
  if(v1>0&&v2==0){
  v2=-0.001;
  ROS_INFO("v1>0,v2==0");
  }
  if(v1==0&&v2<0){
  v1=0.001;
      ROS_INFO("v1==0,v2<0");
  }
  if(v1<0&&v2==0){
  v2=0.001;
      ROS_INFO("v1<0,v2==0");
  }

  //strcpy(command_buff_,"00");
  vel_l = int(v1*10000);
  vel_r = -int(v2*10000);
  if(vel_l>2500||vel_r>2500)
   {  ROS_INFO("vel>3000");}
  ROS_INFO("vel_l = %d    vel_r = %d",vel_l, vel_r);
  ROS_INFO("vel_l = %hx    vel_r = %hx",vel_l, vel_r);

  int temp;
  char tempp[4];
    temp = vel_l;
    tempp[1] =  (char)(temp & 0x0f);
    tempp[0] =  (char)((temp >> 4) & 0x0f);
    tempp[3] =  (char)((temp >> 8) & 0x0f);
    tempp[2] =  (char)((temp >> 12) & 0x0f);
    temp = tempp[0];
    command_buff_[0] = hex[temp];
    temp = tempp[1];
    command_buff_[1] = hex[temp];
    temp = tempp[2];
    command_buff_[2] = hex[temp];
    temp = tempp[3];
    command_buff_[3] = hex[temp];

    temp = vel_r;
    tempp[1] =  (char)(temp & 0x0f);
    tempp[0] =  (char)((temp >> 4) & 0x0f);
    tempp[3] =  (char)((temp >> 8) & 0x0f);
    tempp[2] =  (char)((temp >> 12) & 0x0f);

    temp = tempp[0];
    command_buff_[4] = hex[temp];
    temp = tempp[1];
    command_buff_[5] = hex[temp];
    temp = tempp[2];
    command_buff_[6] = hex[temp];
    temp = tempp[3];
    command_buff_[7] = hex[temp];
  command_buff_[8]= '\0';
  strcat(command_buff_,"00000000");
  command_buff_[16]='\0';
  ROS_INFO("command------->%s", command_buff_);
  
  /*
  temp=(vel_l/256)/16;
  command_buff_[0]=hex[temp];
  temp=(vel_l/256)%16;
  command_buff_[1]=hex[temp];

  temp=(vel_l%256)/16;
  command_buff_[2]=hex[temp];
  temp=(vel_l%256)%16;
  command_buff_[3]=hex[temp];
//ROS_INFO("temp%d  ",temp);

  temp=(vel_r/256)/16;
  command_buff_[4]=hex[temp];
  temp=(vel_r/256)%16;
  command_buff_[5]=hex[temp];
  temp=(vel_r%256)/16;
  command_buff_[6]=hex[temp];
  temp=(vel_r%256)%16;
  command_buff_[7]=hex[temp];
  command_buff_[8]= '\0';
  strcat(command_buff_,"00000000");
  command_buff_[16]='\0';
  */
  
}


int SerialCom::comInit()
{
  int i;

  if((fd_ = openPort(fd_,port_)) < 0)
  {
    ROS_INFO("failed to setup the serial！");
    return 0;
  }

  if((i = setOpt(fd_,baudrate_,8,'N',1)) < 0)
  {
    ROS_INFO("failed to setup the serial！");
    return 0;
  }

  ROS_INFO("the serial openned，setup the serial successed。the file operator=%d",fd_); 
  
  return 0;
}


///Packet转换数据
void SerialCom::SetBuf(char* buf,bool change/* =false */,bool addCRC/*=false*/)
{
	_buf[0]='\0';
	if ( !change )
	{
		strcpy(_buf, buf);
		_len=(int)strlen(buf);
	}
	else
	{
		char c;
		_len=0;
		for(int i = 0; *(buf + i) != '\0' && i < MAX_BUF * 2; i++)
		{
			c=*(buf+i);
			if ( c>='0' && c<='9' )
				c=(char)(c-'0');
			else if( c>='a' && c<='f' )
				c=(char)(c-'a'+10);
			else if( c>='A' && c<='F')
				c=(char)(c-'A'+10);
			else
				continue;
			if ( _len%2==0 )
				_buf[(int)(_len/2)]=c<<4;
			else
				_buf[(int)(_len/2)]=( _buf[(int)(_len/2)] | c );
			_len++;
		}
		//_buf[0]=1;
		_len=(_len+1)/2;
	}
	if( addCRC )
	{
              WORD crc = app_protocol_uart_crc16((BYTE*)GetBuf(), getLen());
              int high, low;
              high = crc / 256;
              low = crc % 256;
              _buf[_len] = (char)low;
              _buf[_len + 1] = (char)high;
              _len += 2;

              int temp;
              temp=(crc/256)/16;
              _crc[2]=hex[temp];
              temp=(crc/256)%16;
              _crc[3]=hex[temp];
              temp=(crc%256)/16;
              _crc[0]=hex[temp];
              temp=(crc%256)%16;
              _crc[1]=hex[temp];
              _crc[4]='\0';
              

		//_buf[0]=1;
    /*
		WORD crc = CRC16((BYTE*)GetBuf(),getLen());;
		int high,low;
		//ROS_INFO("crc--%u",crc);
		high=crc/256;
		low=crc%256;
		_buf[_len]=char(high);
		_buf[_len+1]=char(low);
		_len+=2;
		int temp;
		temp=(crc/256)/16;
		_crc[0]=hex[temp];
		temp=(crc/256)%16;
		_crc[1]=hex[temp];
		temp=(crc%256)/16;
		_crc[2]=hex[temp];
		temp=(crc%256)%16;
		_crc[3]=hex[temp];
		_crc[4]='\0';
    */
		//ROS_INFO("_buf0::%d",int(_buf[0]));
		//ROS_INFO("_buf1::%d",int(_buf[1]));
		//ROS_INFO("_buf2::%d",int(_buf[2]));
		//ROS_INFO("_buf3::%d",int(_buf[3]));
		//ROS_INFO("_buf4::%d",int(_buf[4]));
              
	}
	_buf[_len]='\0';
}

WORD SerialCom::app_protocol_uart_crc16( BYTE *ptr, int len )
{
    WORD crc;
    BYTE da;
    crc = 0;
    while ( len-- != 0 )
    {
        da = ( BYTE )(crc >> 8);     //以8位二进制数的形式暂存CRC的高8位
        crc <<= 8;                  //左移8位，相当于CRC的低8位乘以
        crc ^= crc_ta[da ^ *ptr];     //高8位和当前字节相加后再查表求CRC ，再加上以前的CRC
        ptr++;
    }
    return ( crc );
}

void SerialCom::SetBuf(char* buf,int len,bool change,bool addCRC/*=false*/)
{
	if ( !change )
	{
		for(int i=0;i< ( (MAX_BUF>len)?len:MAX_BUF );i++)
			_buf[i]=buf[i];
		_len=(MAX_BUF>len)?len:MAX_BUF;
	}
	else
	{
		char c;
		_len=0;
		for(int i=0; i<( (MAX_BUF*2>len)?len:MAX_BUF*2 ); i++)
		{
			c=*(buf+i);
			if ( c>='0' && c<='9' )
				c=(char)(c-'\0');
			else if( c>='a' && c<='f' )
				c=(char)(c-'a'+10);
			else if( c>='A' && c<='F')
				c=(char)(c-'A'+10);
			else
				continue;
			if ( _len%2==0 )
			{
				_buf[(int)(_len/2)]=c<<4;
			}
			else
			{
				_buf[(int)(_len/2)]=( _buf[(int)(_len/2)] | c );
			}
			_len++;
		}
		_len=(_len+1)/2;
	}
	if( addCRC )
	{
		WORD crc=CreatCrc((BYTE*)GetBuf(),getLen());
		_buf[_len]=*(char*)(&crc);
		_buf[_len+1]=*((char*)(&crc)+1);
		_len+=2;

	}
	_buf[_len]='\0';
}

void SerialCom::Clear()
{
	_len=0;
	_buf[_len]='\0';
}
//œ«¶ÔÓŠµÄ×Ö·ûŽ®È¡³ö
string SerialCom::GetString(bool hex)
{
	string str;
	if( !hex )
	{
		str=_buf;
	}
	else
	{
		int num;
		for(int i=0;i<_len;i++)
		{
			num=(_buf[i]&0xF0)>>4;
			if ( num>=0 && num<10 )
				str.push_back((char)(num+48));
			else if( num>9 && num<16 )
				str.push_back((char)(num+55));

			num=_buf[i]&0x0F;
			if ( num>=0 && num<10 )
				str.push_back((char)(num+48));
			else if( num>9 && num<16 )
				str.push_back((char)(num+55));
		}
	}
	return str;
}

string SerialCom::GetModifyString(bool hex/* =false */)
{
	string str=GetString(hex);
	int len=(int)str.length();
	for(int i=1;i<=(int)((len+1)/2)-1;i++)
		str.insert(i*3-1,1,' ');
	return str;
}

char* SerialCom::GetBuf()
{
	return _buf;
}

char* SerialCom::GetContinueBuf()
{
	return _buf+_len;
}

int SerialCom::getLen()
{
	return _len;
}

void SerialCom::setLen(int len)
{
	_len=(len>MAX_BUF? MAX_BUF:len);
	_buf[_len]='\0';
}

void SerialCom::setContinue(int len)
{
	_len=(len+_len>MAX_BUF? MAX_BUF:len+_len);
	_buf[_len]='\0';
}

//²úÉúÊ®ÁùÎ»µÄCRCÂë
//²úÉú¶àÏîÊœÎª£ºx^16 + x^15 + x^2 + 1
WORD SerialCom::CreatCrc(BYTE* data,int len )
{
	WORD uCrc16;
	BYTE abData[2];
	uCrc16 = 0;
	abData[0] = 0;
	if ( len<1 )
		return 0;
	//int i=0;
	while (len-- )
	{		
		abData[1] = abData[0];
		//abData[0] = *(data+i);
		abData[0] = *data++;
		if(uCrc16 & 0x8000)
		{
			uCrc16 = (uCrc16 & 0x7fff) << 1;
			uCrc16 ^= CRC16_GEN_POL;
		}
		else
		{
			uCrc16 <<= 1;
		}
		uCrc16 ^= MKSHORT (abData[0] , abData[1]);
		//i++;
	}
	return(uCrc16);
}

bool SerialCom::operator==(SerialCom& in)
{
	if ( _len==in.getLen() )
	{
		for(int i=0;i<_len;i++ )
		{
			if( _buf[i]!=*(in.GetBuf()+i) )
				return false;
		}
		return true;
	}
	return false;
}

WORD SerialCom::CRC16(unsigned char *p,WORD len)
{
	unsigned char i;
	WORD j;
	WORD uiCRC=0xffff;
		for(j=0;j<len;j++)
		{
		uiCRC^=(*p);
		p++;
			for(i=8;i!=0;i--)
			{
			if(uiCRC&1){uiCRC>>=1;uiCRC^=0xa001;}
			else
			uiCRC>>=1;
			}
		}
	return(uiCRC);
}
void SerialCom::sendcommand(const ros::TimerEvent &)
{
  count++;
  _len = 0;
  _command[0] = '\0';
  trans_cmd[0] = '\0';

  strcpy(_begin, "AA ");
  //SetBuf(_begin, false, false);
  strcat(_command, _begin);
  //nwrite=write(fd_, _buf, 1);
  //strcat(trans_cmd, _buf);

  //command_buff_[0]='\0';
  strcpy(_cmdID, "40 01 29 08 ");
  //SetBuf(_cmdID, true, false);
  strcat(_command, _cmdID);
  //nwrite=write(fd_, _buf, 3);
  //strcat(trans_cmd, _buf);

  //strcpy(command_buff_, "E8 03 E8 03 E8 03 E8 03 ");//generate the control command
  //strcpy(command_buff_, "00 00 00 00 00 00 00 00");//generate the control command
  
  if (count == 35)
  {
    OdomVel.linear.x = 0;
    OdomVel.angular.z = 0;
    strcpy(command_buff_, "0000000000000000");
    count = 0;
  }
  
  strcat(_command, command_buff_);    //
  SetBuf(_command, true, true);
  strcat(_command, _crc);             //
  //for (int i = 0; i < _len; i++)
    //ROS_INFO("%hhx", _buf[i]);
  nwrite=write(fd_, _buf, 15);
  //std::cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
  //std::cout<<typeof(nwrite)<<std::endl;
  //std::cout<<nwrite<<std::endl;
  //strcat(trans_cmd, _buf);
  
  strcpy(_end, " 0D ");
  SetBuf(_end, true, false);
  strcat(_command, _end);        //
  //for (int i = 0; i < _len; i++)
    //ROS_INFO("%hhx", _buf[i]);
  //ROS_INFO("%s\n", _command);
  nwrite=write(fd_, _buf, 1);
  //strcat(trans_cmd, _buf);

  //ROS_INFO("_command::%s", _command);
  //ROS_INFO("trans_cmd::%s", trans_cmd);

  OdometryMsg.publish(OdomVel);
}
int main(int argc, char **argv)
{
  ros::init(argc, argv, "serial_com");

  SerialCom serial;
  ros::Timer timer1=serial.n.createTimer(ros::Duration(0.025),&SerialCom::sendcommand,&serial);
  ros::spin();

  return 0;
}

