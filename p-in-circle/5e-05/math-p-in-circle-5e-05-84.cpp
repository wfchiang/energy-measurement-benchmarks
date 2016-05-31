#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.405260119168;
	float c = -0.930343871306;
	float b = 0.202645382255;
	float d = 0.284931816485;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((((((double)a - (double)d) * ((double)b - (double)d)) * (double)(((c - d) * (c - d)) + ((c - d) * (c - d)))) + ((((double)b - (double)d) * (double)(c - d)) * ((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))))) + (((double)(c - d) * ((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d)))) * ((double)a - (double)d))) - ((((((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))) * ((double)b - (double)d)) * (double)(c - d)) + ((((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d))) * (double)(c - d)) * ((double)a - (double)d))) + (((double)(((c - d) * (c - d)) + ((c - d) * (c - d))) * ((double)b - (double)d)) * ((double)a - (double)d))));

}

	return 0;
}
