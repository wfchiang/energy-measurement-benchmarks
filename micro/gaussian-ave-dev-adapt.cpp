#include <iostream>
#include <math.h> 
#include "micro-common.h" 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
  double ave = randFP64(-5.0, 5.0); 
  double dev = randFP64(1.0, 5.0); 
  float ave32 = ave; 
  float dev32 = dev; 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("gauss-ave-dev-adapt-") + string(argv[1]) + ".csv"); 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    
    // predict 
    if (dev <= 1.57) {
      if (dev <= 1.08) {
	if (dev <= 0.59) {
	  if (ave <= -0.4) 
	    goto AVE_DEV_8_9; 
	  else // not ave <= -0.4 
	    goto AVE_DEV_9_9; 
	}
	else // not dev <= 0.59
	  goto AVE_DEV_9_9; 
      }
      else { // not dev <= 1.08 
	if (ave <= -0.8) 
	  goto AVE_DEV_2_9; 
	else { // not ave <= -0.8
	  if (ave <= 0.8) 
	    goto AVE_DEV_4_9; 
	  else 
	    goto AVE_DEV_2_9; 
	}
      }
    }
    else // not dev <= 1.57 
      goto AVE_DEV_2_9; 

  AVE_DEV_2_9: 
    {
      double ____expr_0 = ((double)((float)1.0 / (dev32 * (float)2.50662827463)) * (exp2((double)((float)-1.0 * ((((float)0.0 - ave32) * ((float)0.0 - ave32)) / ((float)2.0 * (dev32 * dev32)))))));
      goto JoinPoint; 
    }

  AVE_DEV_4_9:
    {
      double ____expr_0 = (((double)1.0 / ((double)dev32 * (double)2.50662827463)) * (exp2((double)((float)-1.0 * ((((float)0.0 - ave32) * ((float)0.0 - ave32)) / ((float)2.0 * (dev32 * dev32))))))); 
      goto JoinPoint; 
    }

  AVE_DEV_8_9:
    {
      double ____expr_0 = (((double)1.0 / (dev * (double)2.50662827463)) * (exp2(((double)-1.0 * ((double)((float)((double)0.0 - ave) * (float)((double)0.0 - ave)) / ((double)2.0 * (dev * dev)))))));
      goto JoinPoint; 
    }

  AVE_DEV_9_9:
    {
      double ____expr_0 = (((double)1.0 / (dev * (double)2.50662827463)) * (exp2(((double)-1.0 * ((((double)0.0 - ave) * ((double)0.0 - ave)) / ((double)2.0 * (dev * dev)))))));
      goto JoinPoint; 
    }
    
  JoinPoint:
    ; 

  }

  stop_emeasure(sockfd); 

  return 0;
}
