#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float x = 0.1687746308;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("predatorPrey-mix") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((double)(((float)4.0 * x) * x) / ((double)1.0 + (double)((x / (float)1.11) + (x / (float)1.11))));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
