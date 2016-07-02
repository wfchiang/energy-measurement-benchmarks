#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  float dev = randFP32(1.0, 3.0); 
  float x = randFP32(-10.0, 10.0); 

	double __const_6 = -1.0;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;
	double __const_0 = 0.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((float)__const_4 / (dev * (float)__const_3)) * (expf(((float)__const_6 * (((x - (float)__const_0) * (x - (float)__const_0)) / ((float)__const_5 * (dev * dev)))))));

}

	return 0;
}
