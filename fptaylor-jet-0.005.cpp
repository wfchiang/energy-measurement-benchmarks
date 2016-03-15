
// #include <iostream>
#include <stdio.h> 

#include "../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	float x2 = 0.21631358212;
	float x1 = 4.78612432701;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("jet-0-005-ener-") + string(argv[1]) + ".csv"); 

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = ((double)x1 + (((((((double)((((float)2.0 * x1) * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0))) * ((((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)) - (float)3.0)) + (double)((x1 * x1) * (((float)4.0 * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0))) - (float)6.0))) * ((double)(x1 * x1) + (double)1.0)) + (double)(((float)3.0 * (x1 * x1)) * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)))) + (double)((x1 * x1) * x1)) + (double)x1) + (double)((float)3.0 * (((((float)3.0 * (x1 * x1)) + ((float)2.0 * x2)) - x1) / ((x1 * x1) + (float)1.0)))));

}

	stop_emeasure(sockfd); 

	return 0;
}
