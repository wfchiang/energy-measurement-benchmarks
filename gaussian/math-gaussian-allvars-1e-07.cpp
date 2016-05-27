#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double x = 6.64822009581;
	double dev = 1.69605928942;
	double __const_6 = -1.0;
	double ave = 0.497525130412;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((__const_4 / (dev * __const_3)) * (double)(exp2f(((float)__const_6 * (((float)(x - ave) * (float)(x - ave)) / (float)(__const_5 * (dev * dev)))))));

}

	return 0;
}
