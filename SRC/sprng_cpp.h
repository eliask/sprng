#ifndef _sprng_cpp_h_
#define _sprng_cpp_h_

#include "sprng.h"
#include "lfg/lfg.h"
#include "lcg/lcg.h"
#include "lcg64/lcg64.h"
#include "cmrg/cmrg.h"
#include "mlfg/mlfg.h" 
#include "pmlcg/pmlcg.h"

Sprng * SelectType(int typenum);

#endif
