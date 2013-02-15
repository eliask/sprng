SUBDIRS = . 

LIBDIR=../../SRC/.libs
SRCDIR=../../SRC
INCLUDEDIR=../../include
INCLUDES = -I$(INCLUDEDIR)

GEN=sprng
CLEANFILES=*.$(GEN)

CXX=@MPICXX@
F77=@MPIF77@
MPILIBS=`@MPICXX@ --showme:compile --showme:link`

noinst_PROGRAMS = 2streams_mpi.tmp fsprng_mpi.tmp fsprng-simple_mpi.tmp message_mpi.tmp message-simple_mpi.tmp \
	pi-simple_mpi.tmp seed_mpi.tmp seed-simple_mpi.tmp sprng_mpi.tmp sprng-simple_mpi.tmp \
	2streamsf_mpi.tmp fsprngf_mpi.tmp fsprngf-simple_mpi.tmp messagef_mpi.tmp messagef-simple_mpi.tmp \
	seedf_mpi.tmp seedf-simple_mpi.tmp sprngf_mpi.tmp sprngf-simple_mpi.tmp


2streams_mpi_tmp_SOURCES = 2streams_mpi.cpp $(SRCDIR)/sprng_cpp.h
2streams_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
2streams_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
2streams_mpi_tmp_LDFLAGS = $(MPILIBS)

2streamsf_mpi_tmp_SOURCES = 2streamsf_mpi.F $(SRCDIR)/sprng_f.h
2streamsf_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
2streamsf_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
2streamsf_mpi_tmp_LDFLAGS = $(MPILIBS)

fsprngf_mpi_tmp_SOURCES = fsprngf_mpi.F $(SRCDIR)/sprng_f.h
fsprngf_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
fsprngf_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
fsprngf_mpi_tmp_LDFLAGS = $(MPILIBS)

fsprngf_simple_mpi_tmp_SOURCES = fsprngf-simple_mpi.F $(SRCDIR)/sprng_f.h
fsprngf_simple_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
fsprngf_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
fsprngf_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

fsprng_mpi_tmp_SOURCES = fsprng_mpi.cpp $(SRCDIR)/sprng_cpp.h
fsprng_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
fsprng_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm
fsprng_mpi_tmp_LDFLAGS = $(MPILIBS)

fsprng_simple_mpi_tmp_SOURCES = fsprng-simple_mpi.cpp $(SRCDIR)/sprng_cpp.h
fsprng_simple_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
fsprng_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
fsprng_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

messagef_mpi_tmp_SOURCES = messagef_mpi.F $(SRCDIR)/sprng_f.h
messagef_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
messagef_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
messagef_mpi_tmp_LDFLAGS = $(MPILIBS)

messagef_simple_mpi_tmp_SOURCES = messagef-simple_mpi.F $(SRCDIR)/sprng_f.h
messagef_simple_mpi_tmp_FFLAGS = -I$(INCLUDEDIR)  -DSPRNG_MPI
messagef_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
messagef_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

message_mpi_tmp_SOURCES = message_mpi.cpp $(SRCDIR)/sprng_cpp.h
message_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
message_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
message_mpi_tmp_LDFLAGS = $(MPILIBS)

message_simple_mpi_tmp_SOURCES = message-simple_mpi.cpp $(SRCDIR)/sprng_cpp.h
message_simple_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
message_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
message_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

pi_simple_mpi_tmp_SOURCES = pi-simple_mpi.cpp $(SRCDIR)/sprng_cpp.h
pi_simple_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
pi_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
pi_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

seedf_mpi_tmp_SOURCES = seedf_mpi.F $(SRCDIR)/sprng_f.h
seedf_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
seedf_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
seedf_mpi_tmp_LDFLAGS = $(MPILIBS)

seedf_simple_mpi_tmp_SOURCES = seedf-simple_mpi.F $(SRCDIR)/sprng_f.h
seedf_simple_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
seedf_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
seedf_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

seed_mpi_tmp_SOURCES = seed_mpi.cpp $(SRCDIR)/sprng_cpp.h
seed_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
seed_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm
seed_mpi_tmp_LDFLAGS = $(MPILIBS)

seed_simple_mpi_tmp_SOURCES = seed-simple_mpi.cpp $(SRCDIR)/sprng_cpp.h
seed_simple_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
seed_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm 
seed_simple_mpi_tmp_LDFALGS = $(MPILIBS)

sprngf_mpi_tmp_SOURCES = sprngf_mpi.F $(SRCDIR)/sprng_f.h
sprngf_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
sprngf_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprngf_mpi_tmp_LDFLAGS = $(MPILIBS)

sprngf_simple_mpi_tmp_SOURCES = sprngf-simple_mpi.F $(SRCDIR)/sprng_f.h
sprngf_simple_mpi_tmp_FFLAGS = -I$(INCLUDEDIR) -DSPRNG_MPI
sprngf_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN)
sprngf_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

sprng_mpi_tmp_SOURCES = sprng_mpi.cpp $(SRCDIR)/sprng_cpp.h
sprng_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR)  -DSPRNG_MPI
sprng_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm
sprng_mpi_tmp_LDFLAGS  = $(MPILIBS)

sprng_simple_mpi_tmp_SOURCES = sprng-simple_mpi.cpp $(SRCDIR)/sprng_cpp.h 
sprng_simple_mpi_tmp_CXXFLAGS = -I$(INCLUDEDIR)  -DSPRNG_MPI
sprng_simple_mpi_tmp_LDADD = -L$(LIBDIR) -l$(GEN) -lm
sprng_simple_mpi_tmp_LDFLAGS = $(MPILIBS)

#bin_SCRIPTS = sprng_mpi_test
#sprng_mpi_test:
#	@rm -f *.o
#	@mv sprng-simple_mpi.tmp sprng-simple_mpi.$(GEN)
#	@mv 2streams_mpi.tmp 2streams_mpi.$(GEN)
#	@mv 2streamsf_mpi.tmp 2streamsf_mpi.$(GEN)
#	@mv fsprngf_mpi.tmp fsprngf_mpi.$(GEN)
#	@mv fsprngf-simple_mpi.tmp fsprngf-simple_mpi.$(GEN)
#	@mv fsprng_mpi.tmp fsprng_mpi.$(GEN)
#	@mv fsprng-simple_mpi.tmp fsprng-simple_mpi.$(GEN)
#	@mv messagef_mpi.tmp messagef_mpi.$(GEN)
#	@mv message_mpi.tmp message_mpi.$(GEN)
#	@mv messagef-simple_mpi.tmp messagef-simple_mpi.$(GEN)
#	@mv message-simple_mpi.tmp message-simple_mpi.$(GEN)
#	@mv pi-simple_mpi.tmp pi-simple_mpi.$(GEN)
#	@mv seedf_mpi.tmp seedf_mpi.$(GEN)
#	@mv seedf-simple_mpi.tmp seedf-simple_mpi.$(GEN)
#	@mv seed_mpi.tmp seed_mpi.$(GEN)
#	@mv seed-simple_mpi.tmp seed-simple_mpi.$(GEN)
#	@mv sprngf_mpi.tmp sprngf_mpi.$(GEN)
#	@mv sprngf-simple_mpi.tmp sprngf-simple_mpi.$(GEN)
#	@mv sprng_mpi.tmp sprng_mpi.$(GEN)

