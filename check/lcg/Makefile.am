if USE_MPI
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
endif

SUBDIRS = .

EXTRA_DIST=lcg.data .insertlib
INCLUDEDIR = $(top_srcdir)/SRC

LIBDIR=../../SRC/.libs
CHKDIR=../../check

noinst_PROGRAMS = check.clcg check.flcg check_sim.clcg check_sim.flcg time.clcg time.flcg
check_clcg_SOURCES = check_gen.cpp 
check_clcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_clcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_clcg_LDADD = -L$(LIBDIR) -lsprng
check_clcg_LDFLAGS = $(MPILIB)
check_flcg_SOURCES = check_genf.F 
check_flcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_flcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_flcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++ 
check_flcg_LDFLAGS = $(MPILIB)
check_sim_clcg_SOURCES = check_gen_simple.cpp
check_sim_clcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_clcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
check_sim_clcg_LDADD = -L$(LIBDIR) -lsprng 
check_sim_clcg_LDFLAGS = $(MPILIB)
check_sim_flcg_SOURCES = check_genf_simple.F 
check_sim_flcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
check_sim_flcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
check_sim_flcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++ 
check_sim_flcg_LDFLAGS = $(MPILIB)
time_clcg_SOURCES = timing.cpp
time_clcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_clcg_LDADD = -L$(LIBDIR) -lsprng
time_clcg_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR) 
time_clcg_LDFLAGS = $(MPILIB)
time_flcg_SOURCES = timingf.F
time_flcg_DEPENDENCIES = $(LIBDIR)/libsprng.a
time_flcg_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
time_flcg_LDADD = -L$(LIBDIR) -lsprng -lstdc++ 
time_flcg_LDFLAGS = $(MPILIB)


noinst_SCRIPTS = checklcg timelcg
CLEANFILES = $(noinst_SCRIPTS)

checklcg: $(CHKDIR)/insertlib
	rm -f ./checklcg
	@$(CHKDIR)/insertlib lcg ./checklcg "Checking Default C++ interface:" "check.clcg < ./lcg.data 2> /dev/null" ./check.clcg
	@$(CHKDIR)/insertlib lcg ./checklcg "Checking Simple C++ interface:" "check_sim.clcg < ./lcg.data 2> /dev/null" ./check_sim.clcg

	@$(CHKDIR)/insertlib lcg ./checklcg "Checking Default FORTRAN interface:" "check.flcg < ./lcg.data 2> /dev/null" ./check.flcg
	@$(CHKDIR)/insertlib lcg ./checklcg "Checking Simple FORTRAN interface:" "check_sim.flcg < ./lcg.data 2> /dev/null" ./check_sim.flcg
	chmod u+x ./checklcg

timelcg: $(CHKDIR)/insertlib
	rm -f ./timelcg
	@$(CHKDIR)/insertlib lcg ./timelcg "Timing C++ interface" ./time.clcg ./time.clcg
	@$(CHKDIR)/insertlib lcg ./timelcg "Timing FORTRAN interface" ./time.flcg ./time.flcg
	chmod u+x ./timelcg
