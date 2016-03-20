#include <iostream>
#include <math.h> 
#include "micro-common.h"

using namespace std;

int main (int argc, char **argv) {
  double x   = randFP64(-15.0, 15.0); // -9.65757320639;
  double ave = randFP64(-5.0, 5.0); // 0.0943341206552;
  float x32   = x; 
  float ave32 = ave; 
  
  
  for (int ii = 0 ; ii < 1000000000 ; ii++) {

    // predict 
    if (x <= -3.0) {
      goto X_AVE_0_9; 
    }
    else {
      if (x <= 3.0) {
	if (ave <= -0.4) {
	  if (x <= 0.0) 
	    goto X_AVE_3_9; 
	  else 
	    goto X_AVE_2_9; 
	}
	else 
	  goto X_AVE_3_9; 
      }
      else {
	goto X_AVE_0_9; 
      }
    }

  X_AVE_0_9:
    {
      float ____expr_0 = (((float)1.0 / ((float)1.0 * (float)2.50662827463)) * (exp2f(((float)-1.0 * (((x32 - ave32) * (x32 - ave32)) / ((float)2.0 * ((float)1.0 * (float)1.0)))))));
      goto JoinPoint;
    }

  X_AVE_2_9:
    {
      float ____expr_0 = (((float)1.0 / ((float)1.0 * (float)2.50662827463)) * (exp2f(((float)-1.0 * (((float)(x - ave) * (float)(x - ave)) / ((float)2.0 * ((float)1.0 * (float)1.0)))))));
      goto JoinPoint;
    }

  X_AVE_3_9:
    {
      float ____expr_0 = (((float)1.0 / ((float)1.0 * (float)2.50662827463)) * (exp2f(((float)-1.0 * ((float)((x - ave) * (x - ave)) / ((float)2.0 * ((float)1.0 * (float)1.0)))))));
      goto JoinPoint; 
    }

  JoinPoint:
    ;
  }

  return 0;
}
