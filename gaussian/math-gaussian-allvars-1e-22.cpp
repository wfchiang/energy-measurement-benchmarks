#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double x = 1.76831834743;
	double dev = 2.84251325002;
	double __const_6 = -1.0;
	double ave = 0.43138092748;
	double __const_5 = 2.0;
	double __const_4 = 1.0;
	double __const_3 = 2.50662827463;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((__const_4 / (dev * __const_3)) * (exp2((__const_6 * (((x - ave) * (x - ave)) / (__const_5 * (dev * dev)))))));

}

	return 0;
}
