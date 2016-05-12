#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  srand(time(NULL));

  double dev = randFP32(1.0, 3.0); 
  double x = randFP32(-10.0, 10.0);

  double __const_6 = -1.0;
  double __const_5 = 2.0;
  double __const_4 = 1.0;
  double __const_3 = 2.50662827463;
  double __const_0 = 0.0;
  
  double rel64;
	

  for (int ii = 0 ; ii < 100000000 ; ii++) {
    rel64 = ((__const_4 / (dev * __const_3)) * (exp2((__const_6 * (((x - __const_0) * (x - __const_0)) / (__const_5 * (dev * dev)))))));
  }

  return 0;
}
