# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/debian/Beaglebone/spi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/debian/Beaglebone/spi

# Utility rule file for pru.

# Include the progress variables for this target.
include CMakeFiles/pru.dir/progress.make

CMakeFiles/pru: SPIv1_bin.h


SPIv1_bin.h: SPIv1.p
SPIv1_bin.h: SPI.hp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/debian/Beaglebone/spi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SPIv1_bin.h"
	pasm -V3 -c SPIv1.p

pru: CMakeFiles/pru
pru: SPIv1_bin.h
pru: CMakeFiles/pru.dir/build.make

.PHONY : pru

# Rule to build all files generated by this target.
CMakeFiles/pru.dir/build: pru

.PHONY : CMakeFiles/pru.dir/build

CMakeFiles/pru.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pru.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pru.dir/clean

CMakeFiles/pru.dir/depend:
	cd /home/debian/Beaglebone/spi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/debian/Beaglebone/spi /home/debian/Beaglebone/spi /home/debian/Beaglebone/spi /home/debian/Beaglebone/spi /home/debian/Beaglebone/spi/CMakeFiles/pru.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pru.dir/depend

