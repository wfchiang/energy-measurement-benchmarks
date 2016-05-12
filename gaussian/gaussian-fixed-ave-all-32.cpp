#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));

  float dev = randFP32(1.0, 3.0); 
  float x = randFP32(-10.0, 10.0);

  float __const_6 = -1.0;
  float __const_5 = 2.0;
  float __const_4 = 1.0;
  float __const_3 = 2.50662827463;
  float __const_0 = 0.0;
  
  float rel32;
	

  for (int ii = 0 ; ii < 100000000 ; ii++) {
    rel32 = ((__const_4 / (dev * __const_3)) * (exp2f((__const_6 * (((x - __const_0) * (x - __const_0)) / (__const_5 * (dev * dev)))))));
  }

  return 0;
}
