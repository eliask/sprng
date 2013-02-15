if USE_MPI
  MPIDIR = $(shell @MPICXX@ --showme:compile)
  MPILIB = $(shell @MPICXX@ --showme:link)
endif

SUBDIRS = .

EXTRA_DIST=pmlcg.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../lib
CHKDIR=../../check

bin_PROGRAMS = check.cpmlcg check.fpmlcg check_sim.cpmlcg check_sim.fpmlcg time.cpmlcg time.fpmlcg
check_cpmlcg_SOURCES = check_gen.cpp
check_cpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_cpmlcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_cpmlcg_LDADD = -L$(LIBDIR) -lsprng
check_cpmlcg_LDFLAGS = $(MPILIB)
check_fpmlcg_SOURCES = check_genf.F 
check_fpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_fpmlcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_fpmlcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++
check_fpmlcg_LDFLAGS = $(MPILIB)
check_sim_cpmlcg_SOURCES = check_gen_simple.cpp
check_sim_cpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_cpmlcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_cpmlcg_LDADD = -L$(LIBDIR) -lsprng
check_sim_cpmlcg_LDFLAGS = $(MPILIB)
check_sim_fpmlcg_SOURCES = check_genf_simple.F 
check_sim_fpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_fpmlcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++
check_sim_fpmlcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_fpmlcg_LDFLAGS = $(MPILIB)
time_cpmlcg_SOURCES = timing.cpp
time_cpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_cpmlcg_LDADD = -L$(LIBDIR) -lsprng
time_cpmlcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
time_cpmlcg_LDFLAGS = $(MPILIB)
time_fpmlcg_SOURCES = timingf.F
time_fpmlcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_fpmlcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++
time_fpmlcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_fpmlcg_LDFLAGS = $(MPILIB)

bin_SCRIPTS = checkpmlcg timepmlcg
CLEANFILES = $(bin_SCRIPTS)

checkpmlcg: $(CHKDIR)/insertlib
	rm -f ./checkpmlcg
	@$(CHKDIR)/insertlib pmlcg ./checkpmlcg "Checking Default C++ interface:" "check.cpmlcg < ./pmlcg.data 2> /dev/null" ./check.cpmlcg
	@$(CHKDIR)/insertlib pmlcg ./checkpmlcg "Checking Simple C++ interface:" "check_sim.cpmlcg < ./pmlcg.data 2> /dev/null" ./check_sim.cpmlcg

	@$(CHKDIR)/insertlib pmlcg ./checkpmlcg "Checking Default FORTRAN interface:" "check.fpmlcg < ./pmlcg.data 2> /dev/null" ./check.fpmlcg
	@$(CHKDIR)/insertlib pmlcg ./checkpmlcg "Checking Simple FORTRAN interface:" "check_sim.fpmlcg < ./pmlcg.data 2> /dev/null" ./check_sim.fpmlcg
	chmod u+x ./checkpmlcg

timepmlcg: $(CHKDIR)/insertlib
	rm -f ./timepmlcg
	@$(CHKDIR)/insertlib pmlcg ./timepmlcg "Timing C++ interface" ./time.cpmlcg ./time.cpmlcg
	@$(CHKDIR)/insertlib pmlcg ./timepmlcg "Timing FORTRAN interface" ./time.fpmlcg ./time.fpmlcg
	chmod u+x ./timepmlcg

