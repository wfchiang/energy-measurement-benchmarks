
/* ====
E = 5e-04 
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

  return 0; 
}
