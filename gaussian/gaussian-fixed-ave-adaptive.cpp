#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));

  float dev = randFP32(1.0, 3.0); 
  float x = randFP32(-10.0, 10.0);
  double dev64 = dev;
  double x64 = x; 

  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_0 = 0.0;
  
  float rel32;
  double rel64;
	

  for (int ii = 0 ; ii < 100000000 ; ii++) {

    if (dev <= 1.8) {
      if (x <= -4.0) {
	goto MIX0; 
      }
      else { // x > -4.0 
	if (x <= 4.0) {
	  goto MIX2; 
	}
	else { // x > 4.0 
	  goto MIX0; 
	}
      }
    }
    else { // dev > 1.8 
      goto MIX0; 
    }


  MIX0:
    rel64 = ((__const_4 / ((double)dev * __const_3)) * (exp2((double)((float)__const_6 * (((x - (float)__const_0) * (x - (float)__const_0)) / ((float)__const_5 * (dev * dev)))))));
    goto JoinPoint; 

  MIX1:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (double)(exp2f(((float)__const_6 * (((float)(x64 - __const_0) * (float)(x64 - __const_0)) / (float)(__const_5 * (dev64 * dev64)))))));
    goto JoinPoint; 

  MIX2: 
    rel32 = (((float)__const_4 / ((float)dev64 * (float)__const_3)) * (exp2f(((float)__const_6 * (((float)(x64 - __const_0) * (float)(x64 - __const_0)) / (float)(__const_5 * (dev64 * dev64)))))));
    goto JoinPoint;

  JoinPoint:
    ;

  }

  return 0;
}
