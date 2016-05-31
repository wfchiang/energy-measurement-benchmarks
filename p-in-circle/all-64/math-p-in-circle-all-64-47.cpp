#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double a = -0.298998440403;
	double c = -0.640109401857;
	double b = 0.657013716291;
	double d = 0.645001455389;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
