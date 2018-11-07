
# Kinect驱动安装  

[教程地址](http://www.ncnynl.com/archives/201703/1444.html)  

# 启动Kinect摄像头  

`roslaunch astra_launch astra.launch` 

# 启动3维地图重构  

[github](https://github.com/introlab/rtabmap_ros#installation)  

`roslaunch rtabmap_ros rgbd_mapping.launch`  

# 驱动小车  

```shell
sudo chmod +rwx /dev/ttyUSB0 
roslaunch motor_serialcom  motor.launch
```