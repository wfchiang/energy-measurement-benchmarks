#include <iostream>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.400999148745;
	float V = 0.228279474872;
	float b = 4.27000122856e-05;
	float T = 299.996174651;
	float N = 996.513587024;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)35000000.0 + (double)(a * ((N / V) * (N / V)))) * (double)(V - (N * b))) - ((double)((float)1.3806503e-23 * N) * (double)T));

}

	return 0;
}
