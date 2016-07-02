#include <iostream>
#include <math.h>
#include "myrand.h" 

using namespace std;

int main (int argc, char **argv) {
  float x = randFP32(-10.0, 10.0); 
  float ave = randFP32(-1.0, 1.0); 

	double __const_6 = -1.0;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;
	double __const_1 = 1.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((float)__const_4 / ((float)__const_1 * (float)__const_3)) * (expf(((float)__const_6 * (((x - ave) * (x - ave)) / ((float)__const_5 * ((float)__const_1 * (float)__const_1)))))));

}

	return 0;
}
