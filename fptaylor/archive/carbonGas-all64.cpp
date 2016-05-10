#include <iostream>

using namespace std;

int main (int argc, char **argv) {
	double a = 0.401000607189;
	double V = 0.382389260965;
	double b = 4.26999972128e-05;
	float T = 300.00184126;
	double N = 995.531318357;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)35000000.0 + (a * ((N / V) * (N / V)))) * (V - (N * b))) - (double)(((double)1.3806503e-23 * N) * T));

}

	return 0;
}
