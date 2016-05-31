#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.643050017284;
	float c = -0.598399100763;
	float b = -0.189955439185;
	float d = -0.902497740054;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)(((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((double)(b - d) * (double)(c - d)) * (((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))))) + (double)(((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((double)(a - d) * (double)(a - d)) + ((double)(a - d) * (double)(a - d))) * (double)(b - d)) * (double)(c - d)) + (double)(((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (double)(((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
