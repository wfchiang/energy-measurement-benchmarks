#include <iostream>
#include <math.h> 
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));
  
  double x = randFP32(-10.0, 10.0); 
  double ave = randFP32(-1.0, 1.0); 
  double dev = randFP32(1.0, 3.0); 
  
  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_2 = 0.0;

  double rel64; 


  for (int ii = 0 ; ii < 100000000 ; ii++) {
    rel64 = ((__const_4 / (dev * __const_3)) * (exp2((__const_6 * (((x - ave) * (x - ave)) / (__const_5 * (dev * dev)))))));
  }

  return 0;
}
