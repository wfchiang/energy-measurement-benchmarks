#include <iostream>
#include <math.h> 
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));
  
  float ave = randFP32(-1.0, 1.0); 
  float dev = randFP32(1.0, 3.0); 
  double ave64 = ave; 
  double dev64 = dev; 
  
  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_2 = 0.0;

  float rel32; 
  double rel64; 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    
    if (dev <= 1.6) {
      if (dev <= 1.4) {
	goto MIX0; 
      }
      else { // dev > 1.4
	if (ave <= -0.8) {
	  goto MIX0;
	}
	else { // ave > -0.8
	  goto MIX2; 
	}
      } 
    }
    else { // dev > 1.6 
      goto MIX1; 
    }


  MIX0:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (exp2((double)((float)__const_6 * ((((float)__const_2 - (float)ave64) * ((float)__const_2 - (float)ave64)) / ((float)__const_5 * ((float)dev64 * (float)dev64)))))));
    goto JoinPoint; 

  MIX1:
    rel64 = ((double)((float)__const_4 / (dev * (float)__const_3)) * (double)(exp2f(((float)__const_6 * ((((float)__const_2 - ave) * ((float)__const_2 - ave)) / ((float)__const_5 * (dev * dev)))))));
    goto JoinPoint; 

  MIX2:
    rel32 = ((float)(__const_4 / ((double)dev * __const_3)) * (exp2f(((float)__const_6 * ((((float)__const_2 - ave) * ((float)__const_2 - ave)) / ((float)__const_5 * (dev * dev)))))));
    goto JoinPoint; 

  JoinPoint:
    ;
  }

  return 0;
}
