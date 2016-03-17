#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	float x = 1.20985166662;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("sine-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	  float ____expr_0 = (((x - (((x * x) * x) / (float)6.0)) + (((x * x) * ((x * x) * x)) / (float)120.0)) - (((x * x) * ((x * x) * ((x * x) * x))) / (float)5040.0));

	}
	
}

	stop_emeasure(sockfd); 

	return 0;
}
