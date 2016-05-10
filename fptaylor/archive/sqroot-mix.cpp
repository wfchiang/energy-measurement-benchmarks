#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float x = 0.695619750076;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sqroot-mix") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (((double)(((float)1.0 + ((float)0.5 * x)) - ((float)0.125 * (x * x))) + (double)((float)0.0625 * ((x * x) * x))) - (double)((float)0.0390625 * ((x * x) * (x * x))));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
