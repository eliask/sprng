#ifndef _sprng_cpp_h_
#define _sprng_cpp_h_

#include "sprng.h"
#include "lfg.h"
#include "lcg.h"
#include "lcg64.h"
#include "cmrg.h"
#include "mlfg.h" 
#include "pmlcg.h"

Sprng * SelectType(int typenum);

#endif
