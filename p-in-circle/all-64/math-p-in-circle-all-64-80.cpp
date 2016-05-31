#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double a = 0.545194078743;
	double c = 0.917960453149;
	double b = 0.946616401717;
	double d = -0.0389037387206;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
