#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "myrand.h" 

 
using namespace std;

#define N_REPEATS 100000000 


int main (int argc, char **argv) {
  srand(time(NULL));

  float coeff[10]; 
  float x; 

  for (int i = 0 ; i < 10 ; i++) {
    coeff[i] = randFP32(-1.0, 1.0); 
  }

  x = randFP32(-1.0, 1.0); 


  for (int r = 0 ; r < N_REPEATS ; r++) {
    
    float rel = coeff[0];     

    for (int i = 1 ; i < 10 ; i++) {
      rel = (rel * x) + coeff[i]; 
    }

  }

  return 0; 
}
