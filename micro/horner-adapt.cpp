#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "../emeasure.h" 

 
using namespace std;

#define K 100000
#define N_REPEATS 100000000 


int main (int argc, char **argv) {
  srand(time(NULL));

  double coeff64[10]; 
  double x64; 

  for (int i = 0 ; i < 10 ; i++) {
    coeff64[i] = (double)(rand() % K) / (double)K; 
    if (rand() % 2 == 1) 
      coeff64[i] = -1.0 * coeff64[i]; 
  }

  x64 = (double)(rand() % K) / (double)K; 
  if (rand() % 2 == 1) 
    x64 = -1.0 * x64; 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  // int sockfd = start_emeasure(string("horner-all64-") + string(argv[1]) + ".csv"); 
    
  
  for (int r = 0 ; r < N_REPEATS ; r++) {

    // predict 
    if ((x64 > 0.8) || (x64 <= -0.8)) {
      goto Horner64; 
    }
    else{
      goto Horner32; 
    }

  Horner32:
    {
      float x32 = x64; 
      float rel32 = coeff64[0];     
      
      for (int i = 1 ; i < 10 ; i++) {
	rel32 = (rel32 * x32) + (float)coeff64[i]; 
      }
      
      goto JoinPoint; 
    } 

  Horner64:
    {
      double rel64 = coeff64[0];     
    
      for (int i = 1 ; i < 10 ; i++) {
	rel64 = (rel64 * x64) + coeff64[i]; 
      }

      goto JoinPoint; 
    }

  JoinPoint: 
    ; 
    
  }


  // stop_emeasure(sockfd); 
  
  
  return 0; 
}
