#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "micro-common.h" 
#include "../emeasure.h" 

 
using namespace std;

#define K 100000
#define N_REPEATS 100000000 


int main (int argc, char **argv) {
  srand(time(NULL));

  float coeff[10]; 
  float x; 

  for (int i = 0 ; i < 10 ; i++) {
    coeff[i] = randFP64(-1.0, 1.0); 
  }

  x = randFP64(-1.0, 1.0); 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("horner-all32-") + string(argv[1]) + ".csv"); 
      

  for (int r = 0 ; r < N_REPEATS ; r++) {
    
    float rel = coeff[0];     

    for (int i = 1 ; i < 10 ; i++) {
      rel = (rel * x) + coeff[i]; 
    }

  }


  stop_emeasure(sockfd); 
  
  
  return 0; 
}
