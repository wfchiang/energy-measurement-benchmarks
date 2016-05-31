#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.885610476041;
	float c = -0.894404595009;
	float b = -0.109083363776;
	float d = -0.681803980422;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)(((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((double)(b - d) * (double)(c - d)) * (((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))))) + (double)(((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))) * (double)(b - d)) * (double)(c - d)) + (double)(((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (double)(((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
