# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/czqsole/workspace/codeforces/cf496

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/czqsole/workspace/codeforces/cf496/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cf496.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cf496.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cf496.dir/flags.make

CMakeFiles/cf496.dir/main.cpp.o: CMakeFiles/cf496.dir/flags.make
CMakeFiles/cf496.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/czqsole/workspace/codeforces/cf496/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cf496.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cf496.dir/main.cpp.o -c /Users/czqsole/workspace/codeforces/cf496/main.cpp

CMakeFiles/cf496.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cf496.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/czqsole/workspace/codeforces/cf496/main.cpp > CMakeFiles/cf496.dir/main.cpp.i

CMakeFiles/cf496.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cf496.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/czqsole/workspace/codeforces/cf496/main.cpp -o CMakeFiles/cf496.dir/main.cpp.s

CMakeFiles/cf496.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cf496.dir/main.cpp.o.requires

CMakeFiles/cf496.dir/main.cpp.o.provides: CMakeFiles/cf496.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cf496.dir/build.make CMakeFiles/cf496.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cf496.dir/main.cpp.o.provides

CMakeFiles/cf496.dir/main.cpp.o.provides.build: CMakeFiles/cf496.dir/main.cpp.o


# Object files for target cf496
cf496_OBJECTS = \
"CMakeFiles/cf496.dir/main.cpp.o"

# External object files for target cf496
cf496_EXTERNAL_OBJECTS =

cf496: CMakeFiles/cf496.dir/main.cpp.o
cf496: CMakeFiles/cf496.dir/build.make
cf496: CMakeFiles/cf496.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/czqsole/workspace/codeforces/cf496/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cf496"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cf496.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cf496.dir/build: cf496

.PHONY : CMakeFiles/cf496.dir/build

CMakeFiles/cf496.dir/requires: CMakeFiles/cf496.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cf496.dir/requires

CMakeFiles/cf496.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cf496.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cf496.dir/clean

CMakeFiles/cf496.dir/depend:
	cd /Users/czqsole/workspace/codeforces/cf496/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/czqsole/workspace/codeforces/cf496 /Users/czqsole/workspace/codeforces/cf496 /Users/czqsole/workspace/codeforces/cf496/cmake-build-debug /Users/czqsole/workspace/codeforces/cf496/cmake-build-debug /Users/czqsole/workspace/codeforces/cf496/cmake-build-debug/CMakeFiles/cf496.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cf496.dir/depend
