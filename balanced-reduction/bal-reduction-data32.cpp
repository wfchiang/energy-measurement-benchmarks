
/* ====
E = 1e-04 
   ==== */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  

#include "myrand.h" 


// #define N 512 
#define K 100000000
#define N_REPEATS 10000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  float arr[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    arr[i] = randFP32(-1.0, 1.0); 
  }


  for (int r = 0 ; r < N_REPEATS ; r++) {

    double arr2[256]; 

    for (int i = 0 ; i < 256 ; i++) 
      arr2[i] = ((double)arr[i] + (double)arr[i+256]); 


    for (int g = 128 ; g > 0 ; g = g / 2) {

      for (int i = 0 ; i < g ; i++) 
	arr2[i] = arr2[i] + arr2[i+g]; 

    }

  }

  return 0; 
}
