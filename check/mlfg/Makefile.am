if USE_MPI
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
endif

SUBDIRS = .

EXTRA_DIST=mlfg.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../SRC/.libs
CHKDIR=../../check

noinst_PROGRAMS = check.cmlfg check.fmlfg check_sim.cmlfg check_sim.fmlfg time.cmlfg time.fmlfg
check_cmlfg_SOURCES = check_gen.cpp 
check_cmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_cmlfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_cmlfg_LDADD = -L$(LIBDIR) -lsprng
check_cmlfg_LDFLAGS = $(MPILIB)
check_fmlfg_SOURCES = check_genf.F 
check_fmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_fmlfg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_fmlfg_LDADD = -L$(LIBDIR) -lsprng
check_fmlfg_LDFLAGS = $(MPILIB)
check_sim_cmlfg_SOURCES = check_gen_simple.cpp
check_sim_cmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_cmlfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_cmlfg_LDADD = -L$(LIBDIR) -lsprng
check_sim_cmlfg_LDFLAGS = $(MPILIB)
check_sim_fmlfg_SOURCES = check_genf_simple.F 
check_sim_fmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_fmlfg_LDADD = -L$(LIBDIR) -lsprng
check_sim_fmlfg_FFLAGS =$(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_fmlfg_LDFLAGS = $(MPILIB)
time_cmlfg_SOURCES = timing.cpp
time_cmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_cmlfg_LDADD = -L$(LIBDIR) -lsprng
time_cmlfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
time_cmlfg_LDFLAGS = $(MPILIB)
time_fmlfg_SOURCES = timingf.F
time_fmlfg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_fmlfg_LDADD = -L$(LIBDIR) -lsprng
time_fmlfg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_fmlfg_LDFLAGS = $(MPILIB)

noinst_SCRIPTS = checkmlfg timemlfg
CLEANFILES = $(noinst_SCRIPTS)

checkmlfg: $(CHKDIR)/insertlib
	rm -f ./checkmlfg
	@$(CHKDIR)/insertlib mlfg ./checkmlfg "Checking Default C++ interface:" "check.cmlfg < ./mlfg.data 2> /dev/null" ./check.cmlfg
	@$(CHKDIR)/insertlib mlfg ./checkmlfg "Checking Simple C++ interface:" "check_sim.cmlfg < ./mlfg.data 2> /dev/null" ./check_sim.cmlfg

	@$(CHKDIR)/insertlib mlfg ./checkmlfg "Checking Default FORTRAN interface:" "check.fmlfg < ./mlfg.data 2> /dev/null" ./check.fmlfg
	@$(CHKDIR)/insertlib mlfg ./checkmlfg "Checking Simple FORTRAN interface:" "check_sim.fmlfg < ./mlfg.data 2> /dev/null" ./check_sim.fmlfg
	chmod u+x ./checkmlfg

timemlfg: $(CHKDIR)/insertlib
	rm -f ./timemlfg
	@$(CHKDIR)/insertlib mlfg ./timemlfg "Timing C++ interface" ./time.cmlfg ./time.cmlfg
	@$(CHKDIR)/insertlib mlfg ./timemlfg "Timing FORTRAN interface" ./time.fmlfg ./time.fmlfg
	chmod u+x ./timemlfg
