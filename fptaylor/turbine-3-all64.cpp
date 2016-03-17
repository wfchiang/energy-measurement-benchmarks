#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float r = 3.93913923782;
	float w = 0.816185528578;
	float v = -1.30710715626;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-3-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((((double)3.0 - (double)((float)2.0 / (r * r))) - (double)((float)((double)0.125 * (double)((float)1.0 + ((float)2.0 * v))) * (((w * w) * (r * r)) / ((float)1.0 - v)))) - (double)0.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
