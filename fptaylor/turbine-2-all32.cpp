#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float r = 7.17011871256;
	float w = 0.761044323474;
	float v = -0.551809481936;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-2-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((float)6.0 * v) - (((float)0.5 * v) * (((w * w) * (r * r)) / ((float)1.0 - v)))) - (float)2.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
