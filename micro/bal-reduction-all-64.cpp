
/* ====
E = 5e-05 
   ==== */

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  

#include "../../emeasure.h" 


// #define N 512 
#define K 100000000
#define N_REPEATS 100000000



int main (int argc, char **argv) {

  srand(time(NULL)); 

  double data[512]; 

  for (int i = 0 ; i < 512 ; i++) {
    data[i] = (double)(rand() % K) / (double)(K); 
    if (rand() % 2 == 1) 
      data[i] = -1.0 * data[i]; 
  }

  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("balr-all64-") + string(argv[1]) + ".csv"); 

  for (int r = 0 ; r < N_REPEATS ; r++) {

    for (int g = 256 ; g > 0 ; g = g / 2) {

      for (int i = 0 ; i < g ; i++) 
	data[i] = data[i] + data[i+g]; 

    }

  }

  // stop energy measurement here 
  stop_emeasure(sockfd); 

  return 0; 
}
