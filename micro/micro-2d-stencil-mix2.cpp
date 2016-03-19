#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "../emeasure.h" 

 
using namespace std;

// #define D 5
#define K 100000
#define N_REPEATS 100000000 


int main (int argc, char **argv) {
  srand(time(NULL));

  float data[25]; 

  float grid32_0[25]; 
  float grid32_1[25]; 
  double grid64_0[25]; 
  double grid64_1[25];

  float *g32from, *g32to, *g32temp; 
  double *g64from, *g64to, *g64temp; 

  for (int i = 0 ; i < 25 ; i++) { 
    data[i] = (double)(rand() % K) / (double)K;
    if (rand() % 2 == 1)
      data[i] = -1.0 * data[i];
  }


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("stencil-mix2-") + string(argv[1]) + ".csv"); 

  
  for (int r = 0 ; r < N_REPEATS ; r++) {

#ifdef __USE_MEMCPY
    memcpy(grid32_0, data, sizeof(float)*25);
    memcpy(grid32_1, data, sizeof(float)*25);
#else 
    for (int i = 0 ; i < 25 ; i++) {
      grid32_0[i] = data[i]; 
      grid32_1[i] = data[i];
    }
#endif 

    g32from = grid32_0; 
    g32to   = grid32_1;

    g64from = grid64_0; 
    g64to   = grid64_1; 

    for (int iter = 0 ; iter < 2 ; iter++) {

      for (int x = 1 ; x < 4 ; x++) {
	for (int y = 1 ; y < 4 ; y++) { 
	  g32to[x*5+y] =
	    (g32from[x*5+y] +
	     g32from[(x-1)*5+y] +
	     g32from[(x+1)*5+y] +
	     g32from[x*5+y-1] +
	     g32from[x*5+y+1]) * 
	    (0.2f); 
	}
      }
      
      g32temp = g32from;
      g32from = g32to;
      g32to = g32temp;

    }


    for (int x = 1 ; x < 4 ; x++) {
      for (int y = 1 ; y < 4 ; y++) { 
	g64from[x*5+y] =
	  (double)(g32from[x*5+y] +
		   g32from[(x-1)*5+y] +
		   g32from[(x+1)*5+y] +
		   g32from[x*5+y-1] +
		   g32from[x*5+y+1]) * 
	  (0.2); 
      }
    }


    for (int iter = 0 ; iter < 2 ; iter++) {

      for (int x = 1 ; x < 4 ; x++) {
	for (int y = 1 ; y < 4 ; y++) { 
	  g64to[x*5+y] =
	    (g64from[x*5+y] +
	     g64from[(x-1)*5+y] +
	     g64from[(x+1)*5+y] +
	     g64from[x*5+y-1] +
	     g64from[x*5+y+1]) * 
	    (0.2); 
	}
      }
      
      g64temp = g64from;
      g64from = g64to;
      g64to = g64temp;

    }
    
  }

  stop_emeasure(sockfd); 

  return 0; 
}
