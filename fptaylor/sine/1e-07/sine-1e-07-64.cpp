#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double x = 0.080612861893;
	double __const_2 = 5040.0;
	double __const_1 = 120.0;
	double __const_0 = 6.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((x - (double)((float)((x * x) * x) / (float)__const_0)) + (double)(((float)(x * x) * (float)((x * x) * x)) / (float)__const_1)) - (double)(((float)(x * x) * ((float)(x * x) * (float)((x * x) * x))) / (float)__const_2));

}

	return 0;
}
