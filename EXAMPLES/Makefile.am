if USE_MPI
  SUBDIRS = mpisprng
  MPIDIR = `@MPICXX@ --showme:compile`
  MPILIB = `@MPICXX@ --showme:link`
else
  SUBDIRS = .
endif


LIBDIR=../SRC/.libs
SRCDIR=../SRC
INCLUDEDIR=../include
INCLUDE = -I$(INCLUDEDIR)

GEN=sprng
CLEANFILES=*.$(GEN)

noinst_PROGRAMS = convert.tmp pi-simple.tmp seed.tmp seed-simple.tmp simple-simple.tmp spawn.tmp sprng.tmp sprng-simple.tmp \
	convertf.tmp pif-simple.tmp seedf.tmp seedf-simple.tmp simplef-simple.tmp spawnf.tmp sprngf.tmp sprngf-simple.tmp subroutinef.tmp


convert_tmp_SOURCES = convert.cpp gen_types_menu.h
convert_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
convert_tmp_LDADD = -L$(LIBDIR) -l$(GEN) 
convert_tmp_LDFLAGS = $(MPILIB)

pi_simple_tmp_SOURCES = pi-simple.cpp gen_types_menu.h
pi_simple_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
pi_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN) 
pi_simple_tmp_LDFLAGS = $(MPILIB)

seed_tmp_SOURCES = seed.cpp gen_types_menu.h
seed_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
seed_tmp_LDADD = -L$(LIBDIR) -l$(GEN) 
seed_tmp_LDFLAGS = $(MPILIB)

seed_simple_tmp_SOURCES = seed-simple.cpp gen_types_menu.h
seed_simple_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
seed_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN) 
seed_simple_tmp_LDFLAGS = $(MPILIB)

simple_simple_tmp_SOURCES = simple-simple.cpp gen_types_menu.h
simple_simple_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
simple_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN) 
simple_simple_tmp_LDFLAGS = $(MPILIB)

spawn_tmp_SOURCES = spawn.cpp gen_types_menu.h
spawn_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
spawn_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
spawn_tmp_LDFLAGS = $(MPILIB)

sprng_tmp_SOURCES = sprng.cpp gen_types_menu.h
sprng_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
sprng_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprng_tmp_LDFLAGS = $(MPILIB)

sprng_simple_tmp_SOURCES = sprng-simple.cpp gen_types_menu.h
sprng_simple_tmp_CXXFLAGS = -I$(INCLUDEDIR) $(MPIDIR)
sprng_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprng_simple_tmp_LDFLAGS = $(MPILIB)


convertf_tmp_SOURCES = convertf.F sprng_f.h genf_types_menu.h
convertf_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
convertf_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
convertf_tmp_LDFLAGS = $(MPILIB)

pif_simple_tmp_SOURCES = pif-simple.F sprng_f.h genf_types_menu.h
pif_simple_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
pif_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
pif_simple_tmp_LDFLAGS = $(MPILIB)

seedf_tmp_SOURCES = seedf.F sprng_f.h genf_types_menu.h
seedf_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
seedf_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
seedf_tmp_LDFLAGS = $(MPILIB)

seedf_simple_tmp_SOURCES = seedf-simple.F sprng_f.h genf_types_menu.h
seedf_simple_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
seedf_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
seedf_simple_tmp_LDFLAGS = $(MPILIB)

simplef_simple_tmp_SOURCES = simplef-simple.F sprng_f.h genf_types_menu.h
simplef_simple_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
simplef_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
simplef_simple_tmp_LDFLAGS = $(MPILIB)

spawnf_tmp_SOURCES = spawnf.F sprng_f.h genf_types_menu.h
spawnf_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
spawnf_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
spawnf_tmp_LDFLAGS = $(MPILIB)

subroutinef_tmp_SOURCES = subroutinef.F sprng_f.h genf_types_menu.h
subroutinef_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
subroutinef_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
subroutinef_tmp_LDFLAGS = $(MPILIB)

sprngf_tmp_SOURCES = sprngf.F sprng_f.h genf_types_menu.h
sprngf_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
sprngf_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprngf_tmp_LDFLAGS = $(MPILIB)

sprngf_simple_tmp_SOURCES = sprngf-simple.F sprng_f.h genf_types_menu.h
sprngf_simple_tmp_FFLAGS = $(FFPSIZE) -I$(INCLUDEDIR) $(MPIDIR)
sprngf_simple_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprngf_simple_tmp_LDFLAGS = $(MPILIB)


#bin_SCRIPTS = sprngtest
#sprngtest:
#	@rm -f *.o
#	@mv convert.tmp convert.$(GEN)
#	@mv pi-simple.tmp pi-simple.$(GEN)
#	@mv seed.tmp seed.$(GEN)
#	@mv seed-simple.tmp seed-simple.$(GEN)
#	@mv simple-simple.tmp simple-simple.$(GEN)
#	@mv spawn.tmp spawn.$(GEN)
#	@mv sprng.tmp sprng.$(GEN)
#	@mv sprng-simple.tmp sprng-simple.$(GEN)
#	@mv convertf.tmp convertf.$(GEN)
#	@mv pif-simple.tmp pif-simple.$(GEN)
#	@mv seedf.tmp seedf.$(GEN)
#	@mv seedf-simple.tmp seedf-simple.$(GEN)
#	@mv simplef-simple.tmp simplef-simple.$(GEN)
#	@mv spawnf.tmp spawnf.$(GEN)
#	@mv sprngf.tmp sprngf.$(GEN)
#	@mv sprngf-simple.tmp sprngf-simple.$(GEN)
#	@mv subroutinef.tmp subroutinef.$(GEN)
