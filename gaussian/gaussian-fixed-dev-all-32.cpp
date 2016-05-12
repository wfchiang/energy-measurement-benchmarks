
#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;


int main (int argc, char **argv) {
  srand(time(NULL));

  float x = randFP32(-10.0, 10.0); 
  float ave = randFP32(-1.0, 1.0); 

  float __const_6 = -1.0;
  float __const_5 = 2.0;
  float __const_4 = 1.0;
  float __const_3 = 2.50662827463;
  float __const_1 = 1.0;

  float rel32; 

  
  for (int ii = 0 ; ii < 100000000 ; ii++) {
    rel32 = ((__const_4 / (__const_1 * __const_3)) * (exp2f((__const_6 * (((x - ave) * (x - ave)) / (__const_5 * (__const_1 * __const_1)))))));
  }

  return 0; 
}
