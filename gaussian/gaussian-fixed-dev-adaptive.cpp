
#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;


int main (int argc, char **argv) {
  srand(time(NULL));

  float x = randFP32(-10.0, 10.0); 
  float ave = randFP32(-1.0, 1.0); 

  double x64 = x; 
  double ave64 = ave; 

  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_1 = 1.0;

  float rel32; 
  double rel64; 

  
  for (int ii = 0 ; ii < 100000000 ; ii++) {

    if (x <= 4.0) {
      if (x <= -4.0) {
	goto MIX1; 
      }
      else { // x > -4.0 
	if (x <= 2.0) {
	  goto MIX0; 
	}
	else { // x > 2.0 
	  goto MIX2; 
	}
      }
    }
    else { // x > 4.0) 
      goto MIX1; 
    }
    

  MIX0: 
    rel64  = ((double)((float)__const_4 / (float)(__const_1 * __const_3)) * (double)(exp2f(((float)__const_6 * ((float)((x64 - ave64) * (x64 - ave64)) / ((float)__const_5 * ((float)__const_1 * (float)__const_1)))))));
    goto JoinPoint; 

  MIX1:
    rel32 = (((float)__const_4 / ((float)__const_1 * (float)__const_3)) * (exp2f(((float)__const_6 * ((float)(((double)x - (double)ave) * ((double)x - (double)ave)) / ((float)__const_5 * ((float)__const_1 * (float)__const_1)))))));
    goto JoinPoint; 
    
  MIX2: 
    rel64 = ((__const_4 / (__const_1 * __const_3)) * (double)(exp2f(((float)__const_6 * (((float)(x64 - ave64) * (float)(x64 - ave64)) / ((float)__const_5 * ((float)__const_1 * (float)__const_1)))))));
    goto JoinPoint; 

  JoinPoint: 
    ; 
  }

  return 0; 
}


