# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/chasejones/pong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/chasejones/pong/debug

# Include any dependencies generated for this target.
include CMakeFiles/pong_core.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pong_core.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pong_core.dir/flags.make

CMakeFiles/pong_core.dir/src/AIView.cpp.o: CMakeFiles/pong_core.dir/flags.make
CMakeFiles/pong_core.dir/src/AIView.cpp.o: ../src/AIView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chasejones/pong/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pong_core.dir/src/AIView.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pong_core.dir/src/AIView.cpp.o -c /Users/chasejones/pong/src/AIView.cpp

CMakeFiles/pong_core.dir/src/AIView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pong_core.dir/src/AIView.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chasejones/pong/src/AIView.cpp > CMakeFiles/pong_core.dir/src/AIView.cpp.i

CMakeFiles/pong_core.dir/src/AIView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pong_core.dir/src/AIView.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chasejones/pong/src/AIView.cpp -o CMakeFiles/pong_core.dir/src/AIView.cpp.s

CMakeFiles/pong_core.dir/src/HumanView.cpp.o: CMakeFiles/pong_core.dir/flags.make
CMakeFiles/pong_core.dir/src/HumanView.cpp.o: ../src/HumanView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chasejones/pong/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/pong_core.dir/src/HumanView.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pong_core.dir/src/HumanView.cpp.o -c /Users/chasejones/pong/src/HumanView.cpp

CMakeFiles/pong_core.dir/src/HumanView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pong_core.dir/src/HumanView.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chasejones/pong/src/HumanView.cpp > CMakeFiles/pong_core.dir/src/HumanView.cpp.i

CMakeFiles/pong_core.dir/src/HumanView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pong_core.dir/src/HumanView.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chasejones/pong/src/HumanView.cpp -o CMakeFiles/pong_core.dir/src/HumanView.cpp.s

CMakeFiles/pong_core.dir/src/Logic.cpp.o: CMakeFiles/pong_core.dir/flags.make
CMakeFiles/pong_core.dir/src/Logic.cpp.o: ../src/Logic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chasejones/pong/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/pong_core.dir/src/Logic.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pong_core.dir/src/Logic.cpp.o -c /Users/chasejones/pong/src/Logic.cpp

CMakeFiles/pong_core.dir/src/Logic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pong_core.dir/src/Logic.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chasejones/pong/src/Logic.cpp > CMakeFiles/pong_core.dir/src/Logic.cpp.i

CMakeFiles/pong_core.dir/src/Logic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pong_core.dir/src/Logic.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chasejones/pong/src/Logic.cpp -o CMakeFiles/pong_core.dir/src/Logic.cpp.s

CMakeFiles/pong_core.dir/src/paddle.cpp.o: CMakeFiles/pong_core.dir/flags.make
CMakeFiles/pong_core.dir/src/paddle.cpp.o: ../src/paddle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/chasejones/pong/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/pong_core.dir/src/paddle.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pong_core.dir/src/paddle.cpp.o -c /Users/chasejones/pong/src/paddle.cpp

CMakeFiles/pong_core.dir/src/paddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pong_core.dir/src/paddle.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/chasejones/pong/src/paddle.cpp > CMakeFiles/pong_core.dir/src/paddle.cpp.i

CMakeFiles/pong_core.dir/src/paddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pong_core.dir/src/paddle.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/chasejones/pong/src/paddle.cpp -o CMakeFiles/pong_core.dir/src/paddle.cpp.s

# Object files for target pong_core
pong_core_OBJECTS = \
"CMakeFiles/pong_core.dir/src/AIView.cpp.o" \
"CMakeFiles/pong_core.dir/src/HumanView.cpp.o" \
"CMakeFiles/pong_core.dir/src/Logic.cpp.o" \
"CMakeFiles/pong_core.dir/src/paddle.cpp.o"

# External object files for target pong_core
pong_core_EXTERNAL_OBJECTS =

libpong_core.a: CMakeFiles/pong_core.dir/src/AIView.cpp.o
libpong_core.a: CMakeFiles/pong_core.dir/src/HumanView.cpp.o
libpong_core.a: CMakeFiles/pong_core.dir/src/Logic.cpp.o
libpong_core.a: CMakeFiles/pong_core.dir/src/paddle.cpp.o
libpong_core.a: CMakeFiles/pong_core.dir/build.make
libpong_core.a: CMakeFiles/pong_core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/chasejones/pong/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libpong_core.a"
	$(CMAKE_COMMAND) -P CMakeFiles/pong_core.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pong_core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pong_core.dir/build: libpong_core.a

.PHONY : CMakeFiles/pong_core.dir/build

CMakeFiles/pong_core.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pong_core.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pong_core.dir/clean

CMakeFiles/pong_core.dir/depend:
	cd /Users/chasejones/pong/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/chasejones/pong /Users/chasejones/pong /Users/chasejones/pong/debug /Users/chasejones/pong/debug /Users/chasejones/pong/debug/CMakeFiles/pong_core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pong_core.dir/depend

