#include <iostream>

using namespace std;

int main (int argc, char **argv) {
	float x = 1.09001713547;
	double __const_2 = 5040.0;
	double __const_1 = 120.0;
	double __const_0 = 6.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((double)(x - (((x * x) * x) / (float)__const_0)) + (double)(((x * x) * ((x * x) * x)) / (float)__const_1)) - (double)(((x * x) * ((x * x) * ((x * x) * x))) / (float)__const_2));

}

	return 0;
}
