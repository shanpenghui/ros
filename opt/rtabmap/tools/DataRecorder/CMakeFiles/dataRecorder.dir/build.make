# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/ros/rtabmap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/ros/rtabmap

# Include any dependencies generated for this target.
include tools/DataRecorder/CMakeFiles/dataRecorder.dir/depend.make

# Include the progress variables for this target.
include tools/DataRecorder/CMakeFiles/dataRecorder.dir/progress.make

# Include the compile flags for this target's objects.
include tools/DataRecorder/CMakeFiles/dataRecorder.dir/flags.make

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o: tools/DataRecorder/CMakeFiles/dataRecorder.dir/flags.make
tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o: tools/DataRecorder/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robot/ros/rtabmap/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o"
	cd /home/robot/ros/rtabmap/tools/DataRecorder && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/dataRecorder.dir/main.cpp.o -c /home/robot/ros/rtabmap/tools/DataRecorder/main.cpp

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dataRecorder.dir/main.cpp.i"
	cd /home/robot/ros/rtabmap/tools/DataRecorder && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/robot/ros/rtabmap/tools/DataRecorder/main.cpp > CMakeFiles/dataRecorder.dir/main.cpp.i

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dataRecorder.dir/main.cpp.s"
	cd /home/robot/ros/rtabmap/tools/DataRecorder && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/robot/ros/rtabmap/tools/DataRecorder/main.cpp -o CMakeFiles/dataRecorder.dir/main.cpp.s

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.requires:
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.requires

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.provides: tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.requires
	$(MAKE) -f tools/DataRecorder/CMakeFiles/dataRecorder.dir/build.make tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.provides.build
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.provides

tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.provides.build: tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o

# Object files for target dataRecorder
dataRecorder_OBJECTS = \
"CMakeFiles/dataRecorder.dir/main.cpp.o"

# External object files for target dataRecorder
dataRecorder_EXTERNAL_OBJECTS =

bin/rtabmap-dataRecorder: tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o
bin/rtabmap-dataRecorder: tools/DataRecorder/CMakeFiles/dataRecorder.dir/build.make
bin/rtabmap-dataRecorder: bin/librtabmap_core.so.0.18.0
bin/rtabmap-dataRecorder: bin/librtabmap_gui.so.0.18.0
bin/rtabmap-dataRecorder: bin/librtabmap_utilite.so.0.18.0
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_common.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_octree.so
bin/rtabmap-dataRecorder: /usr/lib/libOpenNI.so
bin/rtabmap-dataRecorder: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libpcl_io.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-dataRecorder: /usr/lib/libpcl_kdtree.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_search.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_surface.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_filters.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_features.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_registration.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_segmentation.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_visualization.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-dataRecorder: /usr/lib/libOpenNI.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-dataRecorder: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libQtSvg.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libQtGui.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libQtXml.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libQtCore.so
bin/rtabmap-dataRecorder: bin/librtabmap_core.so.0.18.0
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libz.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libsqlite3.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libdc1394.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_core.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_types_slam2d.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_types_slam3d.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_types_sba.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_stuff.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_solver_csparse.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_csparse_extension.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libcxsparse.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/libg2o_solver_cholmod.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libcholmod.so
bin/rtabmap-dataRecorder: bin/librtabmap_utilite.so.0.18.0
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
bin/rtabmap-dataRecorder: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkViews.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkInfovis.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkWidgets.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkParallel.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkVolumeRendering.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkGraphics.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkImaging.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkIO.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkFiltering.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/libvtksys.so.5.8.0
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_common.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_octree.so
bin/rtabmap-dataRecorder: /usr/lib/libOpenNI.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_io.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-dataRecorder: /usr/lib/libpcl_kdtree.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_search.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_surface.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_filters.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_features.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_registration.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_segmentation.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_visualization.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_common.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_octree.so
bin/rtabmap-dataRecorder: /usr/lib/libOpenNI.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_io.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-dataRecorder: /usr/lib/libpcl_kdtree.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_search.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_surface.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_filters.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_features.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_registration.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_segmentation.so
bin/rtabmap-dataRecorder: /usr/lib/libpcl_visualization.so
bin/rtabmap-dataRecorder: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/liboctomap.so
bin/rtabmap-dataRecorder: /opt/ros/indigo/lib/liboctomath.so
bin/rtabmap-dataRecorder: /usr/lib/libQVTK.so
bin/rtabmap-dataRecorder: tools/DataRecorder/CMakeFiles/dataRecorder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/rtabmap-dataRecorder"
	cd /home/robot/ros/rtabmap/tools/DataRecorder && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dataRecorder.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/DataRecorder/CMakeFiles/dataRecorder.dir/build: bin/rtabmap-dataRecorder
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/build

tools/DataRecorder/CMakeFiles/dataRecorder.dir/requires: tools/DataRecorder/CMakeFiles/dataRecorder.dir/main.cpp.o.requires
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/requires

tools/DataRecorder/CMakeFiles/dataRecorder.dir/clean:
	cd /home/robot/ros/rtabmap/tools/DataRecorder && $(CMAKE_COMMAND) -P CMakeFiles/dataRecorder.dir/cmake_clean.cmake
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/clean

tools/DataRecorder/CMakeFiles/dataRecorder.dir/depend:
	cd /home/robot/ros/rtabmap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/ros/rtabmap /home/robot/ros/rtabmap/tools/DataRecorder /home/robot/ros/rtabmap /home/robot/ros/rtabmap/tools/DataRecorder /home/robot/ros/rtabmap/tools/DataRecorder/CMakeFiles/dataRecorder.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/DataRecorder/CMakeFiles/dataRecorder.dir/depend
