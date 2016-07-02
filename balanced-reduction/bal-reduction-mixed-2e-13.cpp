
/* ====
E = 1e-04 
   ==== */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  
extern "C" {
#include "quadmath.h" 
} 

#include "myrand.h" 


// #define N 512 
#define K 100000000
#define N_REPEATS 1000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  double arr[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    arr[i] = randFP64(-1.0, 1.0); 
  }


  for (int r = 0 ; r < N_REPEATS ; r++) {

    __float128 arr2[64]; 

    for (int g = 256 ; g > 64 ; g = g / 2) {
      for (int i = i ; i < g ; i++) 
	arr[i] = arr[i] + arr[i+g]; 
    }

    for (int i = 0 ; i < 64 ; i++) 
      arr2[i] = (__float128)(arr[i] + arr[i+64]); 

    for (int g = 128 ; g > 0 ; g = g / 2) {

      for (int i = 0 ; i < g ; i++) 
	arr2[i] = arr2[i] + arr2[i+g]; 

    }

  }

  return 0; 
}
