if USE_MPI
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
endif


SUBDIRS = .

EXTRA_DIST=lcg64.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../SRC/.libs
CHKDIR=../../check

noinst_PROGRAMS = check.clcg64 check.flcg64 check_sim.clcg64 check_sim.flcg64 time.clcg64 time.flcg64
check_clcg64_SOURCES = check_gen.cpp
check_clcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_clcg64_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_clcg64_LDADD = -L$(LIBDIR) -lsprng
check_clcg64_LDFLAGS = $(MPILIB)
check_flcg64_SOURCES = check_genf.F 
check_flcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_flcg64_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_flcg64_LDADD = -L$(LIBDIR) -lsprng
check_flcg64_LDFLAGS = $(MPILIB)
check_sim_clcg64_SOURCES = check_gen_simple.cpp
check_sim_clcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_sim_clcg64_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_clcg64_LDADD = -L$(LIBDIR) -lsprng
check_sim_clcg64_LDFLAGS = $(MPILIB)
check_sim_flcg64_SOURCES = check_genf_simple.F 
check_sim_flcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
check_sim_flcg64_LDADD = -L$(LIBDIR) -lsprng
check_sim_flcg64_FFLAGS =$(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_flcg64_LDFLAGS = $(MPILIB)
time_clcg64_SOURCES = timing.cpp
time_clcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
time_clcg64_LDADD = -L$(LIBDIR) -lsprng
time_clcg64_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
time_clcg64_LDFLAGS = $(MPILIB)
time_flcg64_SOURCES = timingf.F
time_flcg64_DEPENDENCIES = $(LIBDIR)/libsprng.la
time_flcg64_LDADD = -L$(LIBDIR) -lsprng
time_flcg64_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_flcg64_LDFLAGS = $(MPILIB)

noinst_SCRIPTS = checklcg64 timelcg64
CLEANFILES = $(noinst_SCRIPTS)

checklcg64: $(CHKDIR)/insertlib
	rm -f ./checklcg64
	@$(CHKDIR)/insertlib lcg64 ./checklcg64 "Checking Default C++ interface:" "check.clcg64 < ./lcg64.data 2> /dev/null" ./check.clcg64
	@$(CHKDIR)/insertlib lcg64 ./checklcg64 "Checking Simple C++ interface:" "check_sim.clcg64 < ./lcg64.data 2> /dev/null" ./check_sim.clcg64

	@$(CHKDIR)/insertlib lcg64 ./checklcg64 "Checking Default FORTRAN interface:" "check.flcg64 < ./lcg64.data 2> /dev/null" ./check.flcg64
	@$(CHKDIR)/insertlib lcg64 ./checklcg64 "Checking Simple FORTRAN interface:" "check_sim.flcg64 < ./lcg64.data 2> /dev/null" ./check_sim.flcg64
	chmod u+x ./checklcg64

timelcg64: $(CHKDIR)/insertlib
	rm -f ./timelcg64
	@$(CHKDIR)/insertlib lcg64 ./timelcg64 "Timing C++ interface" ./time.clcg64 ./time.clcg64
	@$(CHKDIR)/insertlib lcg64 ./timelcg64 "Timing FORTRAN interface" ./time.flcg64 ./time.flcg64
	chmod u+x ./timelcg64
