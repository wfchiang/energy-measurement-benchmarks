#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float x = 5.55171312348;
	float dev = 1.10226954571;
	double __const_6 = -1.0;
	float ave = -0.502422629221;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((float)__const_4 / (dev * (float)__const_3)) * (exp2f(((float)__const_6 * (((x - ave) * (x - ave)) / ((float)__const_5 * (dev * dev)))))));

}

	return 0;
}
