SUBDIRS = . lfg lcg lcg64 mlfg cmrg pmlcg

INCLUDES = -I$(top_srcdir)/include
CLEANFILES = $(bin_SCRIPTS)
SRCDIR = $(top_srcdir)/SRC
DEFAULT_INCLUDES = -I$(top_srcdir)/SRC
INCLUDEDIR = ../include
LIBDIR = .libs

lib_LTLIBRARIES = libsprng.la

libsprng_la_VERSION = -version-info 4:0

libsprng_includedir = ${includedir}
libsprng_include_HEADERS =	$(INCLUDEDIR)/bignum.h \
				$(INCLUDEDIR)/cmrg.h \
				$(INCLUDEDIR)/lcg64.h \
				$(INCLUDEDIR)/lcg.h \
				$(INCLUDEDIR)/lfg.h \
				$(INCLUDEDIR)/mlfg.h \
				$(INCLUDEDIR)/pmlcg.h \
				$(INCLUDEDIR)/sprng_cpp.h \
				$(INCLUDEDIR)/sprng_f.h \
				$(INCLUDEDIR)/sprng.h \
				$(INCLUDEDIR)/sprng_c.h

#                     basic.cpp 
#                     info.cpp 
libsprng_la_SOURCES = sprng.cpp sprng.h memory.h \
                      sprng_cpp.cpp sprng_cpp.h sprng.h \
                      fwrap.cpp fwrap.h sprng_f.h \
                      cwrap.cpp sprng_c.h \
                      primes_64.h primes_64.cpp \
                      primes_32.h primes_32.cpp \
                      cputime.cpp cputime.h \
                      memory.cpp \
                      communicate.cpp communicate.h \
		      memory.h \
                      store.cpp store.h \
		      basic.h info.h bigrat.h bignum.h \
                      bigrat.cpp bigrat.h bignum.h \
                      bignum.cpp bignum.h \
                      $(SRCDIR)/lcg/lcg.cpp $(SRCDIR)/lcg/lcg.h \
                      $(SRCDIR)/lcg64/lcg64.cpp $(SRCDIR)/lcg64/lcg64.h \
	              $(SRCDIR)/lfg/lfg.cpp $(SRCDIR)/lfg/lfg.h \
	              $(SRCDIR)/mlfg/mlfg.cpp $(SRCDIR)/mlfg/mlfg.h \
                      $(SRCDIR)/pmlcg/pmlcg.cpp $(SRCDIR)/pmlcg/pmlcg.h \
                      $(SRCDIR)/cmrg/cmrg.cpp $(SRCDIR)/cmrg/cmrg.h 

libsprng_la_CXXFLAGS = $(FFXN)  $(MPI_DEF) $(sprng_cxxflags) `@MPICXX@ --showme:compile`
libsprng_la_FFLAGS = $(FFXN) $(sprng_fflags) $(MPI_DEF) `@MPICXX@ --showme:compile`
libsprng_la_LDFLAGS = $(libsprng_la_VERSION) $(FFXN) $(sprng_fflags) $(MPI_DEF) `@MPICXX@ --showme:link`

