#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = -0.850245833469;
	float c = 0.224177314442;
	float b = -0.311838977646;
	float d = -0.910155721716;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)(((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((double)(b - d) * (double)(c - d)) * (((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))))) + (double)(((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))) * (double)(b - d)) * (double)(c - d)) + (double)(((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (double)(((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}