
/* ====
E = 5e-05 
   ==== */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#include <time.h>  

#include "myrand.h" 


// #define N 512 
#define K 100000000
#define N_REPEATS 10000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  double arr[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    arr[i] = randFP64(-1.0, 1.0); 
  }

  for (int r = 0 ; r < N_REPEATS ; r++) {

    for (int g = 256 ; g > 0 ; g = g / 2) {

      for (int i = 0 ; i < g ; i++) 
	arr[i] = arr[i] + arr[i+g]; 

    }

  }

  return 0; 
}
