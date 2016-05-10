#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float a = 0.401000679177;
	float V = 0.316664176051;
	float b = 4.26999690727e-05;
	float T = 300.00449322;
	float N = 1000.31309434;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("carbonGas-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((float)35000000.0 + (a * ((N / V) * (N / V)))) * (V - (N * b))) - (((float)1.3806503e-23 * N) * T));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
