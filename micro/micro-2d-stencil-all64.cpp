#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>
 
using namespace std;

// #define D 5
#define K 100000
#define N_REPEATS 10000 


int main (int argc, char **argv) {
  srand(time(NULL));

  double data[25]; 
  
  double grid0[25]; 
  double grid1[25];

  double *gfrom, *gto, *gtemp; 

  for (int i = 0 ; i < 25 ; i++) { 
    data[i] = (double)(rand() % K) / (double)K;
    if (rand() % 2 == 1)
      data[i] = -1.0 * data[i];
  }


  
  for (int r = 0 ; r < N_REPEATS ; r++) {

    memcpy(grid0, data, sizeof(double)*25);
    memcpy(grid1, data, sizeof(double)*25);

    gfrom = grid0;
    gto   = grid1; 

    for (int x = 1 ; x < 4 ; x++) {
      for (int y = 1 ; y < 4 ; y++) { 
	gto[x*5+y] =
	  ((double)gfrom[x*5+y] +
	   (double)gfrom[(x-1)*5+y] +
	   (double)gfrom[(x+1)*5+y] +
	   (double)gfrom[x*5+y-1] +
	   (double)gfrom[x*5+y+1]) * 
	  (double)(0.2); 
      }
    }

    gtemp = gfrom;
    gfrom = gto;
    gto = gtemp;
    
  }



  return 0; 
}
