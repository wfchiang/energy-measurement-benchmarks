#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	double a = 0.100006621954;
	double c = 0.454436347017;
	double b = -0.128414652442;
	double d = -0.175097306979;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
