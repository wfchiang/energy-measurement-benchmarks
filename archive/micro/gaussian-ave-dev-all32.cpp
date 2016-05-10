#include <iostream>
#include <math.h> 
#include "micro-common.h" 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
  float ave = randFP64(-5.0, 5.0); 
  float dev = randFP64(1.0, 5.0); 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  int sockfd = start_emeasure(string("gauss-ave-dev-all32-") + string(argv[1]) + ".csv"); 

  
  for (int ii = 0 ; ii < 100000000 ; ii++) {
    float ____expr_0 = (((float)1.0 / (dev * (float)2.50662827463)) * (exp2(((float)-1.0 * ((((float)0.0 - ave) * ((float)0.0 - ave)) / ((float)2.0 * (dev * dev)))))));

  }

  stop_emeasure(sockfd); 

  return 0;
}
