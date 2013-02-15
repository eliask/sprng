#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_INIT(SRC/lfg/lfg.cpp)
AC_CANONICAL_SYSTEM

AM_INIT_AUTOMAKE(sprng,4)
AM_CONFIG_HEADER(config.h:config.in)
AM_CONFIG_HEADER(SRC/fwrap.h:SRC/fwrap.h.in)

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AC_PROG_F77


AC_F77_LIBRARY_LDFLAGS 

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lm':
AC_CHECK_LIB([m], [main])

AC_DISABLE_STATIC
AC_PROG_LIBTOOL
AC_SUBST(LIBTOOL_DEPS)
#AC_PROG_RANLIB
AC_PATH_PROGS(BASH, bash)

AC_SUBST(sprng_cxxflags)
AC_SUBST(sprng_fflags)

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([limits.h stddef.h stdlib.h string.h sys/time.h])

AC_CHECK_SIZEOF([long int])

AC_CHECK_LIB(stdc++, main)

if test "x$GCC" = xyes; then
  CXXFLAGS="$CXXFLAGS -Wno-deprecated -Wno-write-strings"
fi

if test "$ac_cv_sizeof_long_int" = "8"; then
  CXXFLAGS="$CXXFLAGS -DLONG64=long"
fi

AC_ARG_WITH([mpi],
    [AC_HELP_STRING([--with-mpi],
        [use the MPI protocols @<:@default=no@:>@])],
    [build_arg_mpi="$withval"],
    [build_arg_mpi=default])
test -z "$build_arg_mpi" && build_arg_mpi=default

if test "$build_arg_mpi" == "yes"; then
  AC_CHECK_PROGS(MPICC, mpicc hcc mpxlc_r mpxlc mpcc cmpicc, $CC) 
  AC_CHECK_PROGS(MPICXX, mpic++ mpicxx mpiCC hcp mpxlC_r mpxlC mpCC cmpic++, $CXX)
  AC_CHECK_PROGS(MPIF77, mpif77 hf77 mpxlf_r mpxlf mpf77 cmpifc, $F77)
  if test -n $MPICXX;then
    can_use_mpi=y
  else
    can_use_mpi=n
  fi
fi


AM_CONDITIONAL(USE_MPI, test "$can_use_mpi" == "y")

if test "$can_use_mpi" == "y"; then
  MPI_DEF="-DSPRNG_MPI"
else
  MPI_DEF=""
  MPICXX=:
fi

AC_SUBST(MPI_DEF)
AC_SUBST(MPICXX)


AC_CHECK_HEADER(fft.h,fft="yes",fft="no")
if test $fft="yes"; then
  AC_CHECK_FUNC(dzfft2dui, [fft="yes"], [fft="no"])
fi
AM_CONDITIONAL(FFT, test $fft = "yes")


if test -z "$F77"; then
  F77="echo"
fi

AC_C_BIGENDIAN

dnl deal with Fortran pointer size
AC_CHECK_SIZEOF(int *)
if test "$ac_cv_sizeof_int_p" = "8"; then
  FFPSIZE="-DPOINTER_SIZE=8 -DLONG64=long"
else
  FFPSIZE=""
fi
AC_SUBST(FFPSIZE)

AC_CHECK_SIZEOF(double)
AC_CHECK_SIZEOF(float)

dnl AC_LANG(C++)
dnl AC_LANG(Fortran 77)
AC_F77_WRAPPERS

dnl deal with fortran wrapper name mangling
AC_F77_NAME_MANGLING()
if test "$ac_case" == "upper"; then
  FSUFFIX="F"
else
  FSUFFIX="f"
fi

if test -n "$ac_underscore"; then
  FFXN="-DAdd_"
  if test -n "$ac_extra"; then
    FFXN="-DAdd__"
  fi
else
  FFXN="-DNoChange"
fi

AC_SUBST(FSUFFIX)
AC_SUBST(FFXN)
AC_SUBST(FFXN)
AC_SUBST(F77_FUNC)
AC_SUBST(F77_FUNC_)

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_CONST
AC_C_INLINE
AC_TYPE_SIZE_T
AC_STRUCT_TM

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_MEMCMP
AC_CHECK_FUNCS([memset pow sqrt])

AC_PROG_INSTALL

AC_OUTPUT([Makefile 
                 include/Makefile
                 SRC/Makefile
                 SRC/cmrg/Makefile
                 SRC/lcg/Makefile
                 SRC/lcg64/Makefile
                 SRC/lfg/Makefile
                 SRC/mlfg/Makefile
                 SRC/pmlcg/Makefile
		 check/Makefile 
		 check/lcg/Makefile 
		 check/lfg/Makefile
		 check/mlfg/Makefile
		 check/cmrg/Makefile
		 check/lcg64/Makefile
		 check/pmlcg/Makefile
		 TESTS/Makefile
		 TESTS/mpitests/Makefile
                 EXAMPLES/Makefile
		 EXAMPLES/mpisprng/Makefile])
#                 lib/Makefile

