#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = -0.980642657152;
	float c = -0.531056127174;
	float b = 0.344576653794;
	float d = -0.033440507085;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}