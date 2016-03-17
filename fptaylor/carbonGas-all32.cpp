#include <iostream>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.401000679177;
	float V = 0.316664176051;
	float b = 4.26999690727e-05;
	float T = 300.00449322;
	float N = 1000.31309434;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((float)35000000.0 + (a * ((N / V) * (N / V)))) * (V - (N * b))) - (((float)1.3806503e-23 * N) * T));

}

	return 0;
}
