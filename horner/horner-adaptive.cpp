#include <iostream>
#include <stdlib.h>
#include <string.h> 
#include <time.h>

#include "myrand.h" 

 
using namespace std;

#define N_REPEATS 100000000 


int main (int argc, char **argv) {
  srand(time(NULL));

  float  coeff32[10]; 
  float  x32; 
  double coeff64[10]; 
  double x64; 

  for (int i = 0 ; i < 10 ; i++) {
    coeff32[i] = coeff64[i] = randFP32(-1.0, 1.0); 
  }

  x32 = x64 = randFP32(-1.0, 1.0); 


  for (int r = 0 ; r < N_REPEATS ; r++) {

    // predict 
    if (x64 <= 0.8) {
      if (x64 > -0.8) 
	goto Horner32;
      else goto Horner64; 
    }
    else goto Horner64; 

  Horner32:
    {
      float rel32 = coeff32[0]; 

      for (int i = 1 ; i < 10 ; i++) {
	rel32 = (rel32 * x32) + coeff32[i]; 
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
  
  return 0; 
}
