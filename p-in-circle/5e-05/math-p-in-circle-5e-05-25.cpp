#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.0295559074785;
	float c = -0.0636377786494;
	float b = 0.505924730895;
	float d = 0.368884570918;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((((((double)a - (double)d) * ((double)b - (double)d)) * (double)(((c - d) * (c - d)) + ((c - d) * (c - d)))) + ((((double)b - (double)d) * (double)(c - d)) * ((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))))) + (((double)(c - d) * ((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d)))) * ((double)a - (double)d))) - ((((((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))) * ((double)b - (double)d)) * (double)(c - d)) + ((((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d))) * (double)(c - d)) * ((double)a - (double)d))) + (((double)(((c - d) * (c - d)) + ((c - d) * (c - d))) * ((double)b - (double)d)) * ((double)a - (double)d))));

}

	return 0;
}
