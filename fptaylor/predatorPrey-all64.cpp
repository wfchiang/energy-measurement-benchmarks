#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	double x = 0.125714616806;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("predatorPrey-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)4.0 * x) * x) / ((double)1.0 + ((x / (double)1.11) + (x / (double)1.11))));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
