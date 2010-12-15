# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/macvicar/dev/hiphop-php

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/macvicar/dev/hiphop-php

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running interactive CMake command-line interface..."
	/usr/bin/cmake -i .
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: install/local
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: install/strip
.PHONY : install/strip/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/macvicar/dev/hiphop-php/CMakeFiles /home/macvicar/dev/hiphop-php/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/macvicar/dev/hiphop-php/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named hphp_runtime_static

# Build rule for target.
hphp_runtime_static: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 hphp_runtime_static
.PHONY : hphp_runtime_static

# fast build rule for target.
hphp_runtime_static/fast:
	$(MAKE) -f src/CMakeFiles/hphp_runtime_static.dir/build.make src/CMakeFiles/hphp_runtime_static.dir/build
.PHONY : hphp_runtime_static/fast

#=============================================================================
# Target rules for targets named afdt

# Build rule for target.
afdt: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 afdt
.PHONY : afdt

# fast build rule for target.
afdt/fast:
	$(MAKE) -f src/third_party/libafdt/CMakeFiles/afdt.dir/build.make src/third_party/libafdt/CMakeFiles/afdt.dir/build
.PHONY : afdt/fast

#=============================================================================
# Target rules for targets named mbfl

# Build rule for target.
mbfl: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 mbfl
.PHONY : mbfl

# fast build rule for target.
mbfl/fast:
	$(MAKE) -f src/third_party/libmbfl/mbfl/CMakeFiles/mbfl.dir/build.make src/third_party/libmbfl/mbfl/CMakeFiles/mbfl.dir/build
.PHONY : mbfl/fast

#=============================================================================
# Target rules for targets named sqlite3

# Build rule for target.
sqlite3: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 sqlite3
.PHONY : sqlite3

# fast build rule for target.
sqlite3/fast:
	$(MAKE) -f src/third_party/libsqlite3/CMakeFiles/sqlite3.dir/build.make src/third_party/libsqlite3/CMakeFiles/sqlite3.dir/build
.PHONY : sqlite3/fast

#=============================================================================
# Target rules for targets named timelib

# Build rule for target.
timelib: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 timelib
.PHONY : timelib

# fast build rule for target.
timelib/fast:
	$(MAKE) -f src/third_party/timelib/CMakeFiles/timelib.dir/build.make src/third_party/timelib/CMakeFiles/timelib.dir/build
.PHONY : timelib/fast

#=============================================================================
# Target rules for targets named hphp_analysis

# Build rule for target.
hphp_analysis: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 hphp_analysis
.PHONY : hphp_analysis

# fast build rule for target.
hphp_analysis/fast:
	$(MAKE) -f src/compiler/CMakeFiles/hphp_analysis.dir/build.make src/compiler/CMakeFiles/hphp_analysis.dir/build
.PHONY : hphp_analysis/fast

#=============================================================================
# Target rules for targets named hphp

# Build rule for target.
hphp: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 hphp
.PHONY : hphp

# fast build rule for target.
hphp/fast:
	$(MAKE) -f src/hphp/CMakeFiles/hphp.dir/build.make src/hphp/CMakeFiles/hphp.dir/build
.PHONY : hphp/fast

#=============================================================================
# Target rules for targets named test

# Build rule for target.
test: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 test
.PHONY : test

# fast build rule for target.
test/fast:
	$(MAKE) -f src/test/CMakeFiles/test.dir/build.make src/test/CMakeFiles/test.dir/build
.PHONY : test/fast

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... hphp_runtime_static"
	@echo "... afdt"
	@echo "... mbfl"
	@echo "... sqlite3"
	@echo "... timelib"
	@echo "... hphp_analysis"
	@echo "... hphp"
	@echo "... test"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

