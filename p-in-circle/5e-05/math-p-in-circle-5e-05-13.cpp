#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.205776779748;
	float c = -0.109358874199;
	float b = 0.744409266143;
	float d = 0.602983351474;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((((((double)a - (double)d) * ((double)b - (double)d)) * (double)(((c - d) * (c - d)) + ((c - d) * (c - d)))) + ((((double)b - (double)d) * (double)(c - d)) * ((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))))) + (((double)(c - d) * ((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d)))) * ((double)a - (double)d))) - ((((((((double)a - (double)d) * ((double)a - (double)d)) + (((double)a - (double)d) * ((double)a - (double)d))) * ((double)b - (double)d)) * (double)(c - d)) + ((((((double)b - (double)d) * ((double)b - (double)d)) + (((double)b - (double)d) * ((double)b - (double)d))) * (double)(c - d)) * ((double)a - (double)d))) + (((double)(((c - d) * (c - d)) + ((c - d) * (c - d))) * ((double)b - (double)d)) * ((double)a - (double)d))));

}

	return 0;
}
