# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /home/brian-kamau/Desktop/Programs/clion-2017.1.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/brian-kamau/Desktop/Programs/clion-2017.1.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brian-kamau/CLionProjects/NeuralNetwork

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NeuralNetwork.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NeuralNetwork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NeuralNetwork.dir/flags.make

CMakeFiles/NeuralNetwork.dir/main.cpp.o: CMakeFiles/NeuralNetwork.dir/flags.make
CMakeFiles/NeuralNetwork.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NeuralNetwork.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NeuralNetwork.dir/main.cpp.o -c /home/brian-kamau/CLionProjects/NeuralNetwork/main.cpp

CMakeFiles/NeuralNetwork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NeuralNetwork.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brian-kamau/CLionProjects/NeuralNetwork/main.cpp > CMakeFiles/NeuralNetwork.dir/main.cpp.i

CMakeFiles/NeuralNetwork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NeuralNetwork.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brian-kamau/CLionProjects/NeuralNetwork/main.cpp -o CMakeFiles/NeuralNetwork.dir/main.cpp.s

CMakeFiles/NeuralNetwork.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/NeuralNetwork.dir/main.cpp.o.requires

CMakeFiles/NeuralNetwork.dir/main.cpp.o.provides: CMakeFiles/NeuralNetwork.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/NeuralNetwork.dir/build.make CMakeFiles/NeuralNetwork.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/NeuralNetwork.dir/main.cpp.o.provides

CMakeFiles/NeuralNetwork.dir/main.cpp.o.provides.build: CMakeFiles/NeuralNetwork.dir/main.cpp.o


# Object files for target NeuralNetwork
NeuralNetwork_OBJECTS = \
"CMakeFiles/NeuralNetwork.dir/main.cpp.o"

# External object files for target NeuralNetwork
NeuralNetwork_EXTERNAL_OBJECTS =

NeuralNetwork: CMakeFiles/NeuralNetwork.dir/main.cpp.o
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/build.make
NeuralNetwork: CMakeFiles/NeuralNetwork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NeuralNetwork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NeuralNetwork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NeuralNetwork.dir/build: NeuralNetwork

.PHONY : CMakeFiles/NeuralNetwork.dir/build

CMakeFiles/NeuralNetwork.dir/requires: CMakeFiles/NeuralNetwork.dir/main.cpp.o.requires

.PHONY : CMakeFiles/NeuralNetwork.dir/requires

CMakeFiles/NeuralNetwork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NeuralNetwork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NeuralNetwork.dir/clean

CMakeFiles/NeuralNetwork.dir/depend:
	cd /home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brian-kamau/CLionProjects/NeuralNetwork /home/brian-kamau/CLionProjects/NeuralNetwork /home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug /home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug /home/brian-kamau/CLionProjects/NeuralNetwork/cmake-build-debug/CMakeFiles/NeuralNetwork.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NeuralNetwork.dir/depend
