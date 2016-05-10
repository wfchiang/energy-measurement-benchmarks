#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float x2 = -3.384994659;
	float x3 = -7.55351476113;
	float x1 = 0.765505602299;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("rigidBody-1-mix") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((double)(((float)-1.0 * (x1 * x2)) - ((float)2.0 * (x2 * x3))) - (double)x1) - (double)x3);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
