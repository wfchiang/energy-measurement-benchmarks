#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	double r = 7.24364558117;
	double w = 0.825891665402;
	double v = -1.73053300328;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-2-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)6.0 * v) - (((double)0.5 * v) * (((w * w) * (r * r)) / ((double)1.0 - v)))) - (double)2.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
