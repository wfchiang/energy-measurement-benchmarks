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

    if (dev <= 2.2) { 
      if (dev <= 2.0) {
	goto MIX1; 
      }
      else { // dev > 2.0
	if (ave <= 0.4) { 
	  goto MIX0; 
	}
	else { // ave > 0.4 
	  goto MIX1; 
	}
      }
    }
    else { // dev > 2.2 
      goto MIX0; 
    } 
    
  MIX0:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (double)(expf(((float)__const_6 * (((float)(__const_2 - ave64) * (float)(__const_2 - ave64)) / (float)(__const_5 * (dev64 * dev64)))))));
    goto JoinPoint; 

  MIX1:
    rel64 = ((__const_4 / (dev64 * __const_3)) * (double)(expf(((float)__const_6 * ((((float)__const_2 - ave) * ((float)__const_2 - ave)) / (float)(__const_5 * (dev64 * dev64)))))));
    goto JoinPoint; 

  MIX2:
    rel64 = ((__const_4 / (double)(dev * (float)__const_3)) * (double)(expf(((float)__const_6 * ((((float)__const_2 - ave) * ((float)__const_2 - ave)) / ((float)__const_5 * (dev * dev)))))));
    goto JoinPoint; 

  JoinPoint:
    ;
  }

  return 0;
}
