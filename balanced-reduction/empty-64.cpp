
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
#define N_REPEATS 1000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  double arr[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    arr[i] = randFP64(-1.0, 1.0); 
  }

  return 0; 
}
