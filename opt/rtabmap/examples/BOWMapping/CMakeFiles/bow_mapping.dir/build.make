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
include examples/BOWMapping/CMakeFiles/bow_mapping.dir/depend.make

# Include the progress variables for this target.
include examples/BOWMapping/CMakeFiles/bow_mapping.dir/progress.make

# Include the compile flags for this target's objects.
include examples/BOWMapping/CMakeFiles/bow_mapping.dir/flags.make

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o: examples/BOWMapping/CMakeFiles/bow_mapping.dir/flags.make
examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o: examples/BOWMapping/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/robot/ros/rtabmap/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o"
	cd /home/robot/ros/rtabmap/examples/BOWMapping && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bow_mapping.dir/main.cpp.o -c /home/robot/ros/rtabmap/examples/BOWMapping/main.cpp

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bow_mapping.dir/main.cpp.i"
	cd /home/robot/ros/rtabmap/examples/BOWMapping && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/robot/ros/rtabmap/examples/BOWMapping/main.cpp > CMakeFiles/bow_mapping.dir/main.cpp.i

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bow_mapping.dir/main.cpp.s"
	cd /home/robot/ros/rtabmap/examples/BOWMapping && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/robot/ros/rtabmap/examples/BOWMapping/main.cpp -o CMakeFiles/bow_mapping.dir/main.cpp.s

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.requires:
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.requires

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.provides: examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.requires
	$(MAKE) -f examples/BOWMapping/CMakeFiles/bow_mapping.dir/build.make examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.provides.build
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.provides

examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.provides.build: examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o

# Object files for target bow_mapping
bow_mapping_OBJECTS = \
"CMakeFiles/bow_mapping.dir/main.cpp.o"

# External object files for target bow_mapping
bow_mapping_EXTERNAL_OBJECTS =

bin/rtabmap-bow_mapping: examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o
bin/rtabmap-bow_mapping: examples/BOWMapping/CMakeFiles/bow_mapping.dir/build.make
bin/rtabmap-bow_mapping: bin/librtabmap_core.so.0.18.0
bin/rtabmap-bow_mapping: bin/librtabmap_utilite.so.0.18.0
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_ts.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_ocl.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_gpu.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_contrib.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_common.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_octree.so
bin/rtabmap-bow_mapping: /usr/lib/libOpenNI.so
bin/rtabmap-bow_mapping: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libpcl_io.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-bow_mapping: /usr/lib/libpcl_kdtree.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_search.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_surface.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_filters.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_features.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_registration.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_segmentation.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_visualization.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libboost_serialization.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libqhull.so
bin/rtabmap-bow_mapping: /usr/lib/libOpenNI.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libflann_cpp_s.a
bin/rtabmap-bow_mapping: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_legacy.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_video.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libopencv_core.so.2.4.8
bin/rtabmap-bow_mapping: /usr/lib/libvtkViews.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkInfovis.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkWidgets.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkParallel.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkVolumeRendering.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkGraphics.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkImaging.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkIO.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkFiltering.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libvtksys.so.5.8.0
bin/rtabmap-bow_mapping: /usr/lib/libpcl_common.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_octree.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_io.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_kdtree.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_search.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_surface.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_filters.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_features.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_registration.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_segmentation.so
bin/rtabmap-bow_mapping: /usr/lib/libpcl_visualization.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libz.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libsqlite3.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libdc1394.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_core.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_types_slam2d.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_types_slam3d.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_types_sba.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_stuff.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_solver_csparse.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_csparse_extension.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libcxsparse.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/libg2o_solver_cholmod.so
bin/rtabmap-bow_mapping: /usr/lib/x86_64-linux-gnu/libcholmod.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/liboctomap.so
bin/rtabmap-bow_mapping: /opt/ros/indigo/lib/liboctomath.so
bin/rtabmap-bow_mapping: examples/BOWMapping/CMakeFiles/bow_mapping.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/rtabmap-bow_mapping"
	cd /home/robot/ros/rtabmap/examples/BOWMapping && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bow_mapping.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/BOWMapping/CMakeFiles/bow_mapping.dir/build: bin/rtabmap-bow_mapping
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/build

examples/BOWMapping/CMakeFiles/bow_mapping.dir/requires: examples/BOWMapping/CMakeFiles/bow_mapping.dir/main.cpp.o.requires
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/requires

examples/BOWMapping/CMakeFiles/bow_mapping.dir/clean:
	cd /home/robot/ros/rtabmap/examples/BOWMapping && $(CMAKE_COMMAND) -P CMakeFiles/bow_mapping.dir/cmake_clean.cmake
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/clean

examples/BOWMapping/CMakeFiles/bow_mapping.dir/depend:
	cd /home/robot/ros/rtabmap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/ros/rtabmap /home/robot/ros/rtabmap/examples/BOWMapping /home/robot/ros/rtabmap /home/robot/ros/rtabmap/examples/BOWMapping /home/robot/ros/rtabmap/examples/BOWMapping/CMakeFiles/bow_mapping.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/BOWMapping/CMakeFiles/bow_mapping.dir/depend

