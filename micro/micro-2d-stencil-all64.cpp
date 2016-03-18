#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "../emeasure.h" 

 
using namespace std;

// #define D 5
#define K 100000
#define N_REPEATS 10000000 


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


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("stencil-all64-") + string(argv[1]) + ".csv"); 

  
  for (int r = 0 ; r < N_REPEATS ; r++) {

#ifdef __USE_MEMCPY
    memcpy(grid0, data, sizeof(double)*25);
    memcpy(grid1, data, sizeof(double)*25);
#else 
    for (int i = 0 ; i < 25 ; i++) {
      grid0[i] = data[i]; 
      grid1[i] = data[i]; 
    }
#endif 

    gfrom = grid0;
    gto   = grid1; 

    for (int iter = 0 ; iter < 5 ; iter++) {

      for (int x = 1 ; x < 4 ; x++) {
	for (int y = 1 ; y < 4 ; y++) { 
	  gto[x*5+y] =
	    (gfrom[x*5+y] +
	     gfrom[(x-1)*5+y] +
	     gfrom[(x+1)*5+y] +
	     gfrom[x*5+y-1] +
	     gfrom[x*5+y+1]) * 
	    (0.2); 
	}
      }
      
      gtemp = gfrom;
      gfrom = gto;
      gto = gtemp;

    }
    
  }

  stop_emeasure(sockfd); 

  return 0; 
}
