#include <iostream>

using namespace std;

int main (int argc, char **argv) {
	double x = 0.701967636884;
	double __const_2 = 5040.0;
	double __const_1 = 120.0;
	double __const_0 = 6.0;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((float)(x - (((x * x) * x) / __const_0)) + ((float)((x * x) * ((x * x) * x)) / (float)__const_1)) - ((float)((x * x) * ((x * x) * ((x * x) * x))) / (float)__const_2));

}

	return 0;
}
