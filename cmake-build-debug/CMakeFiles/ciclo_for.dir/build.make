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
CMAKE_COMMAND = "/Users/elleven/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/elleven/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elleven/Documents/3c/info/eserciziCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ciclo_for.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ciclo_for.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ciclo_for.dir/flags.make

CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o: CMakeFiles/ciclo_for.dir/flags.make
CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o: ../ciclo_for.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o -c /Users/elleven/Documents/3c/info/eserciziCPP/ciclo_for.cpp

CMakeFiles/ciclo_for.dir/ciclo_for.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ciclo_for.dir/ciclo_for.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elleven/Documents/3c/info/eserciziCPP/ciclo_for.cpp > CMakeFiles/ciclo_for.dir/ciclo_for.cpp.i

CMakeFiles/ciclo_for.dir/ciclo_for.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ciclo_for.dir/ciclo_for.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elleven/Documents/3c/info/eserciziCPP/ciclo_for.cpp -o CMakeFiles/ciclo_for.dir/ciclo_for.cpp.s

# Object files for target ciclo_for
ciclo_for_OBJECTS = \
"CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o"

# External object files for target ciclo_for
ciclo_for_EXTERNAL_OBJECTS =

ciclo_for: CMakeFiles/ciclo_for.dir/ciclo_for.cpp.o
ciclo_for: CMakeFiles/ciclo_for.dir/build.make
ciclo_for: CMakeFiles/ciclo_for.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ciclo_for"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ciclo_for.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ciclo_for.dir/build: ciclo_for

.PHONY : CMakeFiles/ciclo_for.dir/build

CMakeFiles/ciclo_for.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ciclo_for.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ciclo_for.dir/clean

CMakeFiles/ciclo_for.dir/depend:
	cd /Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elleven/Documents/3c/info/eserciziCPP /Users/elleven/Documents/3c/info/eserciziCPP /Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug /Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug /Users/elleven/Documents/3c/info/eserciziCPP/cmake-build-debug/CMakeFiles/ciclo_for.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ciclo_for.dir/depend

