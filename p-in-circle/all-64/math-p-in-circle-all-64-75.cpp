#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double a = -0.602432198672;
	double c = -0.164599422276;
	double b = 0.446119839608;
	double d = -0.59764553914;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
