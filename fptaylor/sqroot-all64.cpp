#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	double x = 0.288832919171;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sqroot-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((((double)1.0 + ((double)0.5 * x)) - ((double)0.125 * (x * x))) + ((double)0.0625 * ((x * x) * x))) - ((double)0.0390625 * ((x * x) * (x * x))));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
