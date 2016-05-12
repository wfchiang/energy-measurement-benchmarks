#include <iostream>
#include <math.h> 
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));
  
  float ave = randFP32(-1.0, 1.0); 
  float dev = randFP32(1.0, 3.0); 
  
  float __const_6 = -1.0;
  float __const_5 = 2.0;
  float __const_4 = 1.0;
  float __const_3 = 2.50662827463;
  float __const_2 = 0.0;

  float rel32; 

  for (int ii = 0 ; ii < 100000000 ; ii++) {
    
    rel32 = ((__const_4 / (dev * __const_3)) * (exp2f((__const_6 * (((__const_2 - ave) * (__const_2 - ave)) / (__const_5 * (dev * dev)))))));

  }

  return 0;
}
