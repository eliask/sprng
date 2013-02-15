if USE_MPI
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
endif

SUBDIRS = .

EXTRA_DIST=cmrg.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../SRC/.libs
CHKDIR=../../check

noinst_PROGRAMS = check.ccmrg check.fcmrg check_sim.ccmrg check_sim.fcmrg time.ccmrg time.fcmrg
check_ccmrg_SOURCES = check_gen.cpp
check_ccmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_ccmrg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_ccmrg_LDADD = -L$(LIBDIR) -lsprng
check_ccmrg_LDFLAGS = $(MPILIB)
check_fcmrg_SOURCES = check_genf.F 
check_fcmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_fcmrg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_fcmrg_LDADD = -L$(LIBDIR) -lsprng
check_fcmrg_LDFLAGS = $(MPILIB)
check_sim_ccmrg_SOURCES = check_gen_simple.cpp
check_sim_ccmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_ccmrg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_ccmrg_LDADD = -L$(LIBDIR) -lsprng
check_sim_ccmrg_LDFLAGS = $(MPILIB)
check_sim_fcmrg_SOURCES = check_genf_simple.F 
check_sim_fcmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_fcmrg_LDADD = -L$(LIBDIR) -lsprng
check_sim_fcmrg_FFLAGS =$(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_fcmrg_LDFLAGS = $(MPILIB)
time_ccmrg_SOURCES = timing.cpp
time_ccmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_ccmrg_LDADD = -L$(LIBDIR) -lsprng
time_ccmrg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
time_ccmrg_LDFLAGS = $(MPILIB)
time_fcmrg_SOURCES = timingf.F
time_fcmrg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_fcmrg_LDADD = -L$(LIBDIR) -lsprng
time_fcmrg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_fcmrg_LDFLAGS = $(MPILIB)

noinst_SCRIPTS = checkcmrg timecmrg
CLEANFILES = $(noinst_SCRIPTS)

checkcmrg: $(CHKDIR)/insertlib
	rm -f ./checkcmrg
	@$(CHKDIR)/insertlib cmrg ./checkcmrg "Checking Default C++ interface:" "check.ccmrg < ./cmrg.data 2> /dev/null" ./check.ccmrg
	@$(CHKDIR)/insertlib cmrg ./checkcmrg "Checking Simple C++ interface:" "check_sim.ccmrg < ./cmrg.data 2> /dev/null" ./check_sim.ccmrg

	@$(CHKDIR)/insertlib cmrg ./checkcmrg "Checking Default FORTRAN interface:" "check.fcmrg < ./cmrg.data 2> /dev/null" ./check.fcmrg
	@$(CHKDIR)/insertlib cmrg ./checkcmrg "Checking Simple FORTRAN interface:" "check_sim.fcmrg < ./cmrg.data 2> /dev/null" ./check_sim.fcmrg
	chmod u+x ./checkcmrg

timecmrg: $(CHKDIR)/insertlib
	rm -f ./timecmrg
	@$(CHKDIR)/insertlib cmrg ./timecmrg "Timing C++ interface" ./time.ccmrg ./time.ccmrg
	@$(CHKDIR)/insertlib cmrg ./timecmrg "Timing FORTRAN interface" ./time.fcmrg ./time.fcmrg
	chmod u+x ./timecmrg
