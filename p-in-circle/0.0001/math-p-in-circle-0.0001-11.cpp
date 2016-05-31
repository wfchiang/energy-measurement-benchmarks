#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.072925590864;
	float c = -0.1713843533;
	float b = 0.530388208794;
	float d = -0.856803126235;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)(((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((double)(b - d) * (double)(c - d)) * (((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))))) + (double)(((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))) * (double)(b - d)) * (double)(c - d)) + (double)(((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (double)(((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
