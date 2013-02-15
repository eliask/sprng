SUBDIRS = . lfg lcg lcg64 mlfg cmrg pmlcg

INCLUDES = -I$(top_srcdir)/include
CLEANFILES = *.a $(bin_SCRIPTS)
SRCDIR = $(top_srcdir)/SRC
DEFAULT_INCLUDES = -I$(top_srcdir)/SRC
INCLUDEDIR = ../include

lib_LIBRARIES = libsprng.a


libsprng_a_SOURCES = sprng.cpp sprng.h memory.h \
                     sprng_cpp.cpp sprng_cpp.h sprng.h \
                     fwrap.cpp fwrap.h sprng_f.h \
                     primes_64.h primes_64.cpp \
                     primes_32.h primes_32.cpp \
                     cputime.cpp cputime.h \
                     makeseed.cpp \
                     memory.cpp \
                     communicate.cpp memory.h \
                     store.cpp store.h \
                     basic.cp basic.h info.h bigrat.h bignum.h \
                     info.cpp info.h bignum.h \
                     bigrat.cpp bigrat.h bignum.h \
                     bignum.cpp bignum.h \
                     $(SRCDIR)/lcg/lcg.cpp $(SRCDIR)/lcg/lcg.h \
                     $(SRCDIR)/lcg64/lcg64.cpp $(SRCDIR)/lcg64/lcg64.h \
	             $(SRCDIR)/lfg/lfg.cpp $(SRCDIR)/lfg/lfg.h \
	             $(SRCDIR)/mlfg/mlfg.cpp $(SRCDIR)/mlfg/mlfg.h \
                     $(SRCDIR)/pmlcg/pmlcg.cpp $(SRCDIR)/pmlcg/pmlcg.h \
                     $(SRCDIR)/cmrg/cmrg.cpp $(SRCDIR)/cmrg/cmrg.h 

libsprng_a_CXXFLAGS = $(FFXN)  $(MPI_DEF) $(sprng_cxxflags) $(shell @MPICXX@ --showme:compile) 
libsprng_a_FFLAGS = $(FFXN) $(sprng_fflags) $(MPI_DEF) $(shell @MPICXX@ --showme:compile)  
