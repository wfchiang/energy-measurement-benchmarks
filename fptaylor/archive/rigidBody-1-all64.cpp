#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	double x2 = 4.15788077405;
	double x3 = 8.66501907278;
	double x1 = 4.37868415536;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("rigidBody-1-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((((double)-1.0 * (x1 * x2)) - ((double)2.0 * (x2 * x3))) - x1) - x3);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
