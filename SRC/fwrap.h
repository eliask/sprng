#ifndef _FWRAP_H
#define _FWRAP_H

/************************************************************************/
/************************************************************************/
/*      Inter-language Naming Convention Problem Solution               */
/*                                                                      */
/*      Note that with different compilers you may find that            */
/*      the linker fails to find certain modules due to the naming      */
/*      conventions implicit in particular compilers.  Here the         */
/*      solution was to look at the object code produced by the FORTRAN */
/*      compiler and modify this wrapper code so that the C routines    */
/*      compiled with the same routine names as produced in the FORTRAN */
/*      program.                                                        */
/*                                                                      */
/************************************************************************/
/************************************************************************/

/*
Turn funcName (which must be all lower-case) into something callable from
FORTRAN, typically by appending one or more underscores.
*/

#define ffree_rng               F77_FUNC_(ffree_rng,            FFREE_RNG)
#define fmake_new_seed          F77_FUNC_(fmake_new_seed,       FMAKE_NEW_SEED)
#define fseed_mpi               F77_FUNC_(fseed_mpi,            FSEED_MPI)
#define finit_rng               F77_FUNC_(finit_rng,            FINIT_RNG)
#define fspawn_rng              F77_FUNC_(fspawn_rng,           FSPAWN_RNG)
#define fget_rn_int             F77_FUNC_(fget_rn_int,          FGET_RN_INT)
#define fget_rn_flt             F77_FUNC_(fget_rn_flt,          FGET_RN_FLT)
#define fget_rn_dbl             F77_FUNC_(fget_rn_dbl,          FGET_RN_DBL)
#define fget_seed_rng           F77_FUNC_(fget_seed_rng,        FGET_SEED_RNG)
#define fpack_rng               F77_FUNC_(fpack_rng,            FPACK_RNG)
#define funpack_rng             F77_FUNC_(funpack_rng,          FUNPACK_RNG)
#define fprint_rng              F77_FUNC_(fprint_rng,           FPRINT_RNG)

#define finit_rng_sim           F77_FUNC_(finit_rng_sim,        FINIT_RNG_SIM)
#define fget_rn_int_sim         F77_FUNC_(fget_rn_int_sim,      FGET_RN_INT_SIM)
#define fget_rn_flt_sim         F77_FUNC_(fget_rn_flt_sim,      FGET_RN_FLT_SIM)
#define fget_rn_dbl_sim         F77_FUNC_(fget_rn_dbl_sim,      FGET_RN_DBL_SIM)
#define finit_rng_simmpi        F77_FUNC_(finit_rng_simmpi,     FINIT_RNG_SIMMPI)
#define fget_rn_int_simmpi      F77_FUNC_(fget_rn_int_simmpi,   FGET_RN_INT_SIMMPI)
#define fget_rn_flt_simmpi      F77_FUNC_(fget_rn_flt_simmpi,   FGET_RN_FLT_SIMMPI)
#define fget_rn_dbl_simmpi      F77_FUNC_(fget_rn_dbl_simmpi,   FGET_RN_DBL_SIMMPI)
#define fpack_rng_simple        F77_FUNC_(fpack_rng_simple,     FPACK_RNG_SIMPLE)
#define funpack_rng_simple      F77_FUNC_(funpack_rng_simple,   FUNPACK_RNG_SIMPLE)
#define fprint_rng_simple       F77_FUNC_(fprint_rng_simple,    FPRINT_RNG_SIMPLE)

#define fcpu_t                  F77_FUNC_(fcpu_t,               FCPU_T)

#endif
