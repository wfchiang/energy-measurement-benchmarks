#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	double r = 4.3858720344;
	double w = 0.488594166609;
	double v = -1.1966778227;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-1-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)3.0 + ((double)2.0 / (r * r))) - (((double)0.125 * ((double)3.0 - ((double)2.0 * v))) * (((w * w) * (r * r)) / ((double)1.0 - v)))) - (double)4.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
