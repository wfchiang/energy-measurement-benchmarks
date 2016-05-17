#include <iostream>
#include <math.h> 
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));
  
  float x = randFP32(-10.0, 10.0); 
  float ave = randFP32(-1.0, 1.0); 
  float dev = randFP32(1.0, 3.0); 
  double x64 = x; 
  double ave64 = ave; 
  double dev64 = dev; 
  
  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_2 = 0.0;

  double rel64; 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    
    if (dev <= 2.2) {
      if (x <= 4.0) {
	if (x <= -4.0) {
	  goto MIX2; 
	}
	else { // x > -4.0 
	  if (dev <= 1.8) {
	    goto MIX1; 
	  }
	  else { // dev > 1.8 
	    goto MIX3; 
	  }
	} 
      }
      else { // x > 4.0 
	if (ave <= 0.6) {
	  goto MIX2; 
	}
	else { // ave > 0.6
	  if (x <= 6.0) {
	    goto MIX0; 
	  }
	  else { // x > 6.0 
	    goto MIX2; 
	  }
	}
      }
    }
    else { // dev > 2.2 
      goto MIX2; 
    }


  MIX0:
    rel64 = ((double)((float)__const_4 / (float)(dev64 * __const_3)) * (double)(exp2f((float)(__const_6 * (((x64 - ave64) * (x64 - ave64)) / (__const_5 * (dev64 * dev64)))))));
    goto JoinPoint; 

  MIX1:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (exp2((double)((float)__const_6 * ((float)((x64 - ave64) * (x64 - ave64)) / (float)(__const_5 * (dev64 * dev64)))))));
    goto JoinPoint; 

  MIX2:
    rel64 = ((__const_4 / ((double)dev * __const_3)) * (exp2((double)((float)__const_6 * (((x - ave) * (x - ave)) / (float)(__const_5 * ((double)dev * (double)dev)))))));
    goto JoinPoint; 

  MIX3:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (double)(exp2f(((float)__const_6 * (((float)(x64 - ave64) * (float)(x64 - ave64)) / ((float)__const_5 * ((float)dev64 * (float)dev64)))))));
    goto JoinPoint; 

  JoinPoint:
    ;
  }

  return 0;
}
