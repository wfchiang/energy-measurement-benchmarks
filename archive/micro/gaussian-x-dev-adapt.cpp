#include <iostream>
#include <math.h> 
#include "micro-common.h" 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
  double x   = randFP64(-15.0, 15.0); 
  double dev = randFP64(1.0, 5.0); 
  float  x32  = x; 
  float dev32 = dev; 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("gauss-x-dev-adapt-") + string(argv[1]) + ".csv"); 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    
    // predict 
    if (dev <= 2.55) {
      if (x <= -6.0) 
	goto X_DEV_3_9; 
      else { // not x <= -6.0
	if (x <= 6.0) {
	  if (dev <= 2.06) 
	    goto X_DEV_9_9; 
	  else 
	    goto X_DEV_7_9; 
	}
	else // not x <= 6.0 
	  goto X_DEV_3_9; 
      }
    }
    else { // not dev <= 2.55 
      if (dev <= 3.04) {
	if (x <= -6.0) 
	  goto X_DEV_3_9; 
	else { // not x <= -6.0 
	  if (x <= -3.0) 
	    goto X_DEV_5_9; 
	  else // not x <= -3.0 
	    goto X_DEV_3_9; 
	} 
      }
      else // not dev <= 3.04 
	goto X_DEV_3_9; 
    }

  X_DEV_3_9:
    {
      double ____expr_0 = ((double)((float)1.0 / (dev32 * (float)2.50662827463)) * (exp2(((double)-1.0 * ((double)((x32 - (float)0.0) * (x32 - (float)0.0)) / (double)((float)2.0 * (dev32 * dev32)))))));
      goto JoinPoint; 
    }

  X_DEV_5_9:
    {
      double ____expr_0 = ((double)((float)1.0 / (dev32 * (float)2.50662827463)) * (exp2(((double)-1.0 * ((((double)x32 - (double)0.0) * ((double)x32 - (double)0.0)) / (double)((float)2.0 * (dev32 * dev32)))))));
      goto JoinPoint;
    }

  X_DEV_7_9:
    {
      double ____expr_0 = (((double)1.0 / ((double)dev32 * (double)2.50662827463)) * (exp2(((double)-1.0 * ((((double)x32 - (double)0.0) * ((double)x32 - (double)0.0)) / (double)((float)2.0 * (dev32 * dev32)))))));
      goto JoinPoint;
    }
    
  X_DEV_9_9:
    {
      double ____expr_0 = (((double)1.0 / (dev * (double)2.50662827463)) * (exp2(((double)-1.0 * (((x - (double)0.0) * (x - (double)0.0)) / ((double)2.0 * (dev * dev)))))));
      goto JoinPoint; 
    }

  JoinPoint: 
    ; 
  }

  stop_emeasure(sockfd); 

  return 0;
}
