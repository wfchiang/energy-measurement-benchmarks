#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  double dev = randFP32(1.0, 3.0); 
  double x = randFP32(-10.0, 10.0); 

	double __const_6 = -1.0;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;
	double __const_0 = 0.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((__const_4 / (dev * __const_3)) * (double)(exp2f((float)(__const_6 * ((double)((float)(x - __const_0) * (float)(x - __const_0)) / (__const_5 * (dev * dev)))))));

}

	return 0;
}
