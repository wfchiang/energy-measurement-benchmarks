
// #include <iostream>
#include <stdio.h> 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	float x2 = -14.7552140677;
	float x1 = -1.58770697491;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("jet-0-01-ener-") + string(argv[1]) + ".csv"); 

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	  float ____expr_0 = (x1 + ((((((((((float)2.0 * x1) * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0))) * ((((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)) - (float)3.0)) + ((x1 * x1) * (((float)4.0 * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0))) - (float)6.0))) * ((x1 * x1) + (float)1.0)) + (((float)3.0 * (x1 * x1)) * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)))) + ((x1 * x1) * x1)) + x1) + ((float)3.0 * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)))));

}
	
	stop_emeasure(sockfd); 

	return 0;
}
