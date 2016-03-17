#include <iostream>

#include "../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	float x = -0.54595893851;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sine-2e-07-ener-") + string(argv[1]) + ".csv"); 

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)x - (double)(((x * x) * x) / (float)6.0)) + (double)(((x * x) * ((x * x) * x)) / (float)120.0)) - (double)(((x * x) * ((x * x) * ((x * x) * x))) / (float)5040.0));

}

	stop_emeasure(sockfd); 

	return 0;
}
