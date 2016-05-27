#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double x = -6.12863078853;
	double dev = 2.46339423582;
	double __const_6 = -1.0;
	double ave = 0.793423786104;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((__const_4 / (dev * __const_3)) * (double)(exp2f((float)(__const_6 * (((x - ave) * (x - ave)) / (__const_5 * (dev * dev)))))));

}

	return 0;
}
