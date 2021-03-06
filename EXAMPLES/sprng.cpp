/***************************************************************************/
/*            ____Demonstrates the use of sprng and isprng____             */
/* A random number stream is initialized and a few random double precision */
/* numbers and a few integers are printed.                                 */
/***************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstdlib>


#include "sprng_cpp.h"

using namespace std;


#define SEED 985456376


int main()
{
  int streamnum, nstreams;
  double rn;
  int irn;
  int i, j;
  int gtype;  

  Sprng * ptr;

  streamnum = 0;
  nstreams = 1;

#include "gen_types_menu.h"  /* header file generated by Make */

  printf("Type in a generator type (integers: 0,1,2,3,4,5):  ");
  scanf("%d", &gtype);

  ptr = SelectType(gtype);
  ptr->init_sprng(streamnum, nstreams, SEED, SPRNG_DEFAULT);

  printf("\n --------------------------------------------------------\n");
  printf(" Print information about new stream:\n");
  ptr->print_sprng();
  
  printf(" Printing 3 random numbers in [0,1):\n");
  
  for (i=0;i<3;i++){
    rn = ptr->sprng();   	/* generate a double precision random number */
    printf("%f\n",rn);
  }
		
  printf(" Printing 3 random integers in [0,2^31):\n");
  		
  for (i=0;i<3;i++) {
    irn = ptr->isprng();    /* generate an integer random number */
    printf("%16d\n",irn);
  }

  ptr->free_sprng();  /* free memory used to store stream state */
  
  return 0;
}
