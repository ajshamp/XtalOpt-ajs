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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shamp03/src/xtalopt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shamp03/src/xtalopt/build

# Include any dependencies generated for this target.
include src/spglib/CMakeFiles/spglib.dir/depend.make

# Include the progress variables for this target.
include src/spglib/CMakeFiles/spglib.dir/progress.make

# Include the compile flags for this target's objects.
include src/spglib/CMakeFiles/spglib.dir/flags.make

src/spglib/CMakeFiles/spglib.dir/cell.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/cell.c.o: ../src/spglib/cell.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/cell.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/cell.c.o   -c /home/shamp03/src/xtalopt/src/spglib/cell.c

src/spglib/CMakeFiles/spglib.dir/cell.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/cell.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/cell.c > CMakeFiles/spglib.dir/cell.c.i

src/spglib/CMakeFiles/spglib.dir/cell.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/cell.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/cell.c -o CMakeFiles/spglib.dir/cell.c.s

src/spglib/CMakeFiles/spglib.dir/cell.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/cell.c.o.requires

src/spglib/CMakeFiles/spglib.dir/cell.c.o.provides: src/spglib/CMakeFiles/spglib.dir/cell.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/cell.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/cell.c.o.provides

src/spglib/CMakeFiles/spglib.dir/cell.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/cell.c.o

src/spglib/CMakeFiles/spglib.dir/debug.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/debug.c.o: ../src/spglib/debug.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/debug.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/debug.c.o   -c /home/shamp03/src/xtalopt/src/spglib/debug.c

src/spglib/CMakeFiles/spglib.dir/debug.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/debug.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/debug.c > CMakeFiles/spglib.dir/debug.c.i

src/spglib/CMakeFiles/spglib.dir/debug.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/debug.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/debug.c -o CMakeFiles/spglib.dir/debug.c.s

src/spglib/CMakeFiles/spglib.dir/debug.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/debug.c.o.requires

src/spglib/CMakeFiles/spglib.dir/debug.c.o.provides: src/spglib/CMakeFiles/spglib.dir/debug.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/debug.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/debug.c.o.provides

src/spglib/CMakeFiles/spglib.dir/debug.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/debug.c.o

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o: ../src/spglib/hall_symbol.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/hall_symbol.c.o   -c /home/shamp03/src/xtalopt/src/spglib/hall_symbol.c

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/hall_symbol.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/hall_symbol.c > CMakeFiles/spglib.dir/hall_symbol.c.i

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/hall_symbol.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/hall_symbol.c -o CMakeFiles/spglib.dir/hall_symbol.c.s

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.requires

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.provides: src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.provides

src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o

src/spglib/CMakeFiles/spglib.dir/kpoint.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/kpoint.c.o: ../src/spglib/kpoint.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/kpoint.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/kpoint.c.o   -c /home/shamp03/src/xtalopt/src/spglib/kpoint.c

src/spglib/CMakeFiles/spglib.dir/kpoint.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/kpoint.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/kpoint.c > CMakeFiles/spglib.dir/kpoint.c.i

src/spglib/CMakeFiles/spglib.dir/kpoint.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/kpoint.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/kpoint.c -o CMakeFiles/spglib.dir/kpoint.c.s

src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.requires

src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.provides: src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.provides

src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/kpoint.c.o

src/spglib/CMakeFiles/spglib.dir/lattice.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/lattice.c.o: ../src/spglib/lattice.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/lattice.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/lattice.c.o   -c /home/shamp03/src/xtalopt/src/spglib/lattice.c

src/spglib/CMakeFiles/spglib.dir/lattice.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/lattice.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/lattice.c > CMakeFiles/spglib.dir/lattice.c.i

src/spglib/CMakeFiles/spglib.dir/lattice.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/lattice.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/lattice.c -o CMakeFiles/spglib.dir/lattice.c.s

src/spglib/CMakeFiles/spglib.dir/lattice.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/lattice.c.o.requires

src/spglib/CMakeFiles/spglib.dir/lattice.c.o.provides: src/spglib/CMakeFiles/spglib.dir/lattice.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/lattice.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/lattice.c.o.provides

src/spglib/CMakeFiles/spglib.dir/lattice.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/lattice.c.o

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o: ../src/spglib/mathfunc.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/mathfunc.c.o   -c /home/shamp03/src/xtalopt/src/spglib/mathfunc.c

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/mathfunc.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/mathfunc.c > CMakeFiles/spglib.dir/mathfunc.c.i

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/mathfunc.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/mathfunc.c -o CMakeFiles/spglib.dir/mathfunc.c.s

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.requires

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.provides: src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.provides

src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o: ../src/spglib/pointgroup.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/pointgroup.c.o   -c /home/shamp03/src/xtalopt/src/spglib/pointgroup.c

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/pointgroup.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/pointgroup.c > CMakeFiles/spglib.dir/pointgroup.c.i

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/pointgroup.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/pointgroup.c -o CMakeFiles/spglib.dir/pointgroup.c.s

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.requires

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.provides: src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.provides

src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o

src/spglib/CMakeFiles/spglib.dir/primitive.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/primitive.c.o: ../src/spglib/primitive.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/primitive.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/primitive.c.o   -c /home/shamp03/src/xtalopt/src/spglib/primitive.c

src/spglib/CMakeFiles/spglib.dir/primitive.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/primitive.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/primitive.c > CMakeFiles/spglib.dir/primitive.c.i

src/spglib/CMakeFiles/spglib.dir/primitive.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/primitive.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/primitive.c -o CMakeFiles/spglib.dir/primitive.c.s

src/spglib/CMakeFiles/spglib.dir/primitive.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/primitive.c.o.requires

src/spglib/CMakeFiles/spglib.dir/primitive.c.o.provides: src/spglib/CMakeFiles/spglib.dir/primitive.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/primitive.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/primitive.c.o.provides

src/spglib/CMakeFiles/spglib.dir/primitive.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/primitive.c.o

src/spglib/CMakeFiles/spglib.dir/refinement.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/refinement.c.o: ../src/spglib/refinement.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/refinement.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/refinement.c.o   -c /home/shamp03/src/xtalopt/src/spglib/refinement.c

src/spglib/CMakeFiles/spglib.dir/refinement.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/refinement.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/refinement.c > CMakeFiles/spglib.dir/refinement.c.i

src/spglib/CMakeFiles/spglib.dir/refinement.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/refinement.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/refinement.c -o CMakeFiles/spglib.dir/refinement.c.s

src/spglib/CMakeFiles/spglib.dir/refinement.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/refinement.c.o.requires

src/spglib/CMakeFiles/spglib.dir/refinement.c.o.provides: src/spglib/CMakeFiles/spglib.dir/refinement.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/refinement.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/refinement.c.o.provides

src/spglib/CMakeFiles/spglib.dir/refinement.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/refinement.c.o

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o: ../src/spglib/sitesym_database.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/sitesym_database.c.o   -c /home/shamp03/src/xtalopt/src/spglib/sitesym_database.c

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/sitesym_database.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/sitesym_database.c > CMakeFiles/spglib.dir/sitesym_database.c.i

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/sitesym_database.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/sitesym_database.c -o CMakeFiles/spglib.dir/sitesym_database.c.s

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.requires

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.provides: src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.provides

src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o: ../src/spglib/site_symmetry.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/site_symmetry.c.o   -c /home/shamp03/src/xtalopt/src/spglib/site_symmetry.c

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/site_symmetry.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/site_symmetry.c > CMakeFiles/spglib.dir/site_symmetry.c.i

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/site_symmetry.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/site_symmetry.c -o CMakeFiles/spglib.dir/site_symmetry.c.s

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.requires

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.provides: src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.provides

src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o: ../src/spglib/spacegroup.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/spacegroup.c.o   -c /home/shamp03/src/xtalopt/src/spglib/spacegroup.c

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/spacegroup.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/spacegroup.c > CMakeFiles/spglib.dir/spacegroup.c.i

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/spacegroup.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/spacegroup.c -o CMakeFiles/spglib.dir/spacegroup.c.s

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.requires

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.provides: src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.provides

src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o

src/spglib/CMakeFiles/spglib.dir/spg_database.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/spg_database.c.o: ../src/spglib/spg_database.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/spg_database.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/spg_database.c.o   -c /home/shamp03/src/xtalopt/src/spglib/spg_database.c

src/spglib/CMakeFiles/spglib.dir/spg_database.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/spg_database.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/spg_database.c > CMakeFiles/spglib.dir/spg_database.c.i

src/spglib/CMakeFiles/spglib.dir/spg_database.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/spg_database.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/spg_database.c -o CMakeFiles/spglib.dir/spg_database.c.s

src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.requires

src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.provides: src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.provides

src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/spg_database.c.o

src/spglib/CMakeFiles/spglib.dir/spglib.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/spglib.c.o: ../src/spglib/spglib.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/spglib.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/spglib.c.o   -c /home/shamp03/src/xtalopt/src/spglib/spglib.c

src/spglib/CMakeFiles/spglib.dir/spglib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/spglib.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/spglib.c > CMakeFiles/spglib.dir/spglib.c.i

src/spglib/CMakeFiles/spglib.dir/spglib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/spglib.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/spglib.c -o CMakeFiles/spglib.dir/spglib.c.s

src/spglib/CMakeFiles/spglib.dir/spglib.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/spglib.c.o.requires

src/spglib/CMakeFiles/spglib.dir/spglib.c.o.provides: src/spglib/CMakeFiles/spglib.dir/spglib.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/spglib.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/spglib.c.o.provides

src/spglib/CMakeFiles/spglib.dir/spglib.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/spglib.c.o

src/spglib/CMakeFiles/spglib.dir/symmetry.c.o: src/spglib/CMakeFiles/spglib.dir/flags.make
src/spglib/CMakeFiles/spglib.dir/symmetry.c.o: ../src/spglib/symmetry.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/shamp03/src/xtalopt/build/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/spglib/CMakeFiles/spglib.dir/symmetry.c.o"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -o CMakeFiles/spglib.dir/symmetry.c.o   -c /home/shamp03/src/xtalopt/src/spglib/symmetry.c

src/spglib/CMakeFiles/spglib.dir/symmetry.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/spglib.dir/symmetry.c.i"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -E /home/shamp03/src/xtalopt/src/spglib/symmetry.c > CMakeFiles/spglib.dir/symmetry.c.i

src/spglib/CMakeFiles/spglib.dir/symmetry.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/spglib.dir/symmetry.c.s"
	cd /home/shamp03/src/xtalopt/build/src/spglib && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -w -S /home/shamp03/src/xtalopt/src/spglib/symmetry.c -o CMakeFiles/spglib.dir/symmetry.c.s

src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.requires:
.PHONY : src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.requires

src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.provides: src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.requires
	$(MAKE) -f src/spglib/CMakeFiles/spglib.dir/build.make src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.provides.build
.PHONY : src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.provides

src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.provides.build: src/spglib/CMakeFiles/spglib.dir/symmetry.c.o

# Object files for target spglib
spglib_OBJECTS = \
"CMakeFiles/spglib.dir/cell.c.o" \
"CMakeFiles/spglib.dir/debug.c.o" \
"CMakeFiles/spglib.dir/hall_symbol.c.o" \
"CMakeFiles/spglib.dir/kpoint.c.o" \
"CMakeFiles/spglib.dir/lattice.c.o" \
"CMakeFiles/spglib.dir/mathfunc.c.o" \
"CMakeFiles/spglib.dir/pointgroup.c.o" \
"CMakeFiles/spglib.dir/primitive.c.o" \
"CMakeFiles/spglib.dir/refinement.c.o" \
"CMakeFiles/spglib.dir/sitesym_database.c.o" \
"CMakeFiles/spglib.dir/site_symmetry.c.o" \
"CMakeFiles/spglib.dir/spacegroup.c.o" \
"CMakeFiles/spglib.dir/spg_database.c.o" \
"CMakeFiles/spglib.dir/spglib.c.o" \
"CMakeFiles/spglib.dir/symmetry.c.o"

# External object files for target spglib
spglib_EXTERNAL_OBJECTS =

src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/cell.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/debug.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/kpoint.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/lattice.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/primitive.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/refinement.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/spg_database.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/spglib.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/symmetry.c.o
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/build.make
src/spglib/libspglib.a: src/spglib/CMakeFiles/spglib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library libspglib.a"
	cd /home/shamp03/src/xtalopt/build/src/spglib && $(CMAKE_COMMAND) -P CMakeFiles/spglib.dir/cmake_clean_target.cmake
	cd /home/shamp03/src/xtalopt/build/src/spglib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/spglib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/spglib/CMakeFiles/spglib.dir/build: src/spglib/libspglib.a
.PHONY : src/spglib/CMakeFiles/spglib.dir/build

src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/cell.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/debug.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/hall_symbol.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/kpoint.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/lattice.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/mathfunc.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/pointgroup.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/primitive.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/refinement.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/sitesym_database.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/site_symmetry.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/spacegroup.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/spg_database.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/spglib.c.o.requires
src/spglib/CMakeFiles/spglib.dir/requires: src/spglib/CMakeFiles/spglib.dir/symmetry.c.o.requires
.PHONY : src/spglib/CMakeFiles/spglib.dir/requires

src/spglib/CMakeFiles/spglib.dir/clean:
	cd /home/shamp03/src/xtalopt/build/src/spglib && $(CMAKE_COMMAND) -P CMakeFiles/spglib.dir/cmake_clean.cmake
.PHONY : src/spglib/CMakeFiles/spglib.dir/clean

src/spglib/CMakeFiles/spglib.dir/depend:
	cd /home/shamp03/src/xtalopt/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shamp03/src/xtalopt /home/shamp03/src/xtalopt/src/spglib /home/shamp03/src/xtalopt/build /home/shamp03/src/xtalopt/build/src/spglib /home/shamp03/src/xtalopt/build/src/spglib/CMakeFiles/spglib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/spglib/CMakeFiles/spglib.dir/depend

