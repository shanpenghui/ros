#!/usr/bin/env bash

# Filename:  deploy.sh
# Date:           Wed Oct 24 21:50:14 CST 2018
# Discription:Catkin Workspace init

 sudo apt update && sudo apt upgrade -y #&& sudo apt install ros-indigo-kinect-aux ros-indigo-openni-launch -y ;
mkdir ros/catkin_ws/src -p && cd ros/catkin_ws
catkin_create_pkg beginner_tutorials std_msgs rospy roscpp #kinect_aux openni_launch
catkin_make

wget https://github.com/TonyRobotics/RoboWare/raw/master/Studio/roboware-studio_1.2.0-1524709819_amd64.deb -O roboware-studio.deb && sudo dpkg -i roboware-studio.deb && sudo apt install -f

