
/* ====
E = 1e-04 
   ==== */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  

#include "micro-common.h" 
#include "../emeasure.h" 


// #define N 512 
#define K 100000000
#define N_REPEATS 10000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  float data[512]; 
  float arr[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    data[i] = randFP64(-1.0, 1.0); 
  }


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("balr-mix") + string(argv[1]) + ".csv"); 

  for (int r = 0 ; r < N_REPEATS ; r++) {

#ifdef __USE_MEMCPY
    memcpy(arr, data, sizeof(float)*512); 
#else 
    for (int i = 0 ; i < 512 ; i++) 
      arr[i] = data[i]; 
#endif 

    double arr2[256]; 

    for (int i = 0 ; i < 256 ; i++) 
      arr2[i] = (double)(arr[i] + arr[i+256]); 


    for (int g = 128 ; g > 0 ; g = g / 2) {

      for (int i = 0 ; i < g ; i++) 
	arr2[i] = arr2[i] + arr2[i+g]; 

    }

  }

  // stop energy measurement here 
  stop_emeasure(sockfd); 

  return 0; 
}
