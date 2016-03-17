#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float x = 0.760446529855;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sqroot-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((((float)1.0 + ((float)0.5 * x)) - ((float)0.125 * (x * x))) + ((float)0.0625 * ((x * x) * x))) - ((float)0.0390625 * ((x * x) * (x * x))));

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
