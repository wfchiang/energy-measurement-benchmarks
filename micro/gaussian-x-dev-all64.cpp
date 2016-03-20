#include <iostream>
#include <math.h> 
#include "micro-common.h" 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
  double x   = randFP64(-15.0, 15.0); 
  double dev = randFP64(1.0, 5.0); 


  // start energy measurement here 
  // may need to sleep a little bit before here... 
  sleep(2); 
  assert(argc == 2); 
  // int sockfd = start_emeasure(string("gauss-x-dev-all64-") + string(argv[1]) + ".csv"); 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    double ____expr_0 = (((double)1.0 / (dev * (double)2.50662827463)) * (exp2(((double)-1.0 * (((x - (double)0.0) * (x - (double)0.0)) / ((double)2.0 * (dev * dev)))))));
  }

  // stop_emeasure(sockfd); 

  return 0;
}
