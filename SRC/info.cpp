#include "bignum.h"

struct BIGNUM_ARRAY_TYPE
{
  long size;
  BigNum *list;
};

/* Values pertain to this particular parameter: 2^61-1 as modulus*/
struct BIGNUM_ARRAY_TYPE init_factors()
{
  struct BIGNUM_ARRAY_TYPE factors;

  factors.size = 12;
  factors.list = new BigNum[12];
	
  factors.list[0] = "2";
  factors.list[1] = "3";
  factors.list[2] = "5";
  factors.list[3] = "7";
  factors.list[4] = "B";
  factors.list[5] = "D";
  factors.list[6] = "1F";
  factors.list[7] = "29";
  factors.list[8] = "3D";
  factors.list[9] = "97";
  factors.list[10] = "14B";
  factors.list[11] = "529";

  return (factors);
}

