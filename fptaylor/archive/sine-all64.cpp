#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	double x = 1.05700977089;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sine-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((x - (((x * x) * x) / (double)6.0)) + (((x * x) * ((x * x) * x)) / (double)120.0)) - (((x * x) * ((x * x) * ((x * x) * x))) / (double)5040.0));

}

}

	stop_emeasure(sockfd); 

	return 0;
}
