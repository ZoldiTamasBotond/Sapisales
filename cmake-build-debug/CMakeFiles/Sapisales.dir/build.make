# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\C programok\Sapientia\Adatszerkezetek\Sapisales"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Sapisales.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Sapisales.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sapisales.dir/flags.make

CMakeFiles/Sapisales.dir/main.c.obj: CMakeFiles/Sapisales.dir/flags.make
CMakeFiles/Sapisales.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Sapisales.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Sapisales.dir\main.c.obj -c "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\main.c"

CMakeFiles/Sapisales.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sapisales.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\main.c" > CMakeFiles\Sapisales.dir\main.c.i

CMakeFiles/Sapisales.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sapisales.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\main.c" -o CMakeFiles\Sapisales.dir\main.c.s

# Object files for target Sapisales
Sapisales_OBJECTS = \
"CMakeFiles/Sapisales.dir/main.c.obj"

# External object files for target Sapisales
Sapisales_EXTERNAL_OBJECTS =

Sapisales.exe: CMakeFiles/Sapisales.dir/main.c.obj
Sapisales.exe: CMakeFiles/Sapisales.dir/build.make
Sapisales.exe: CMakeFiles/Sapisales.dir/linklibs.rsp
Sapisales.exe: CMakeFiles/Sapisales.dir/objects1.rsp
Sapisales.exe: CMakeFiles/Sapisales.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Sapisales.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sapisales.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sapisales.dir/build: Sapisales.exe
.PHONY : CMakeFiles/Sapisales.dir/build

CMakeFiles/Sapisales.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sapisales.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sapisales.dir/clean

CMakeFiles/Sapisales.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\C programok\Sapientia\Adatszerkezetek\Sapisales" "D:\C programok\Sapientia\Adatszerkezetek\Sapisales" "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug" "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug" "D:\C programok\Sapientia\Adatszerkezetek\Sapisales\cmake-build-debug\CMakeFiles\Sapisales.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Sapisales.dir/depend

