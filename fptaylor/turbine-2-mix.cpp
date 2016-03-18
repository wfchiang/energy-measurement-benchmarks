#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float r = 4.41371662824;
	float w = 0.618031863448;
	float v = -4.21323900138;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-2-mix") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((double)((float)6.0 * v) - ((double)((float)0.5 * v) * (double)(((w * w) * (r * r)) / ((float)1.0 - v)))) - (double)2.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
