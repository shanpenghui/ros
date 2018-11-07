# Install script for directory: /home/robot/ros/rtabmap/tools

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/robot/ros/rtabmap/tools/ConsoleApp/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/ImagesJoiner/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/ExtractObject/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/Camera/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/CameraRGBD/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/StereoEval/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/KittiDataset/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/RgbdDataset/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/EurocDataset/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/Recovery/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/Reprocess/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/DatabaseViewer/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/EpipolarGeometry/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/OdometryViewer/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/DataRecorder/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/Calibration/cmake_install.cmake")
  INCLUDE("/home/robot/ros/rtabmap/tools/Report/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

