if USE_MPI
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
endif

SUBDIRS = .

EXTRA_DIST=lfg.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../SRC/.libs
CHKDIR=../../check

noinst_PROGRAMS = check.clfg check.flfg check_sim.clfg check_sim.flfg time.clfg time.flfg
check_clfg_SOURCES = check_gen.cpp
check_clfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_clfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_clfg_LDADD = -L$(LIBDIR) -lsprng
check_clfg_LDFLAGS = $(MPILIB)
check_flfg_SOURCES = check_genf.F 
check_flfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_flfg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_flfg_LDADD = -L$(LIBDIR) -lsprng
check_flfg_LDFLAGS = $(MPILIB)
check_sim_clfg_SOURCES = check_gen_simple.cpp
check_sim_clfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_sim_clfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_clfg_LDADD = -L$(LIBDIR) -lsprng
check_sim_clfg_LDFLAGS = $(MPILIB)
check_sim_flfg_SOURCES = check_genf_simple.F 
check_sim_flfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_sim_flfg_LDADD = -L$(LIBDIR) -lsprng
check_sim_flfg_FFLAGS =$(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_flfg_LDFLAGS = $(MPILIB)
time_clfg_SOURCES = timing.cpp
time_clfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
time_clfg_LDADD = -L$(LIBDIR) -lsprng
time_clfg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
time_clfg_LDFLAGS = $(MPILIB)
time_flfg_SOURCES = timingf.F
time_flfg_DEPENDENCIES = $(LIBDIR)/libsprng.la
time_flfg_LDADD = -L$(LIBDIR) -lsprng
time_flfg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_flfg_LDFLAGS = $(MPILIB)

noinst_SCRIPTS = checklfg timelfg
CLEANFILES = $(noinst_SCRIPTS)

checklfg: $(CHKDIR)/insertlib
	rm -f ./checklfg
	@$(CHKDIR)/insertlib lfg ./checklfg "Checking Default C++ interface:" "check.clfg < ./lfg.data 2> /dev/null" ./check.clfg
	@$(CHKDIR)/insertlib lfg ./checklfg "Checking Simple C++ interface:" "check_sim.clfg < ./lfg.data 2> /dev/null" ./check_sim.clfg

	@$(CHKDIR)/insertlib lfg ./checklfg "Checking Default FORTRAN interface:" "check.flfg < ./lfg.data 2> /dev/null" ./check.flfg
	@$(CHKDIR)/insertlib lfg ./checklfg "Checking Simple FORTRAN interface:" "check_sim.flfg < ./lfg.data 2> /dev/null" ./check_sim.flfg
	chmod u+x ./checklfg

timelfg: $(CHKDIR)/insertlib
	rm -f ./timelfg
	@$(CHKDIR)/insertlib lfg ./timelfg "Timing C++ interface" ./time.clfg ./time.clfg
	@$(CHKDIR)/insertlib lfg ./timelfg "Timing FORTRAN interface" ./time.flfg ./time.flfg
	chmod u+x ./timelfg
