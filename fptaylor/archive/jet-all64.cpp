#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	double x2 = -0.261927065084;
	double x1 = -4.79139328265;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("jet-all64") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	double ____expr_0 = (x1 + ((((((((((double)2.0 * x1) * (((((double)3.0 * (x1 * x1)) + ((double)2.0 * x2)) - x1) / ((x1 * x1) + (double)1.0))) * ((((((double)3.0 * (x1 * x1)) + ((double)2.0 * x2)) - x1) / ((x1 * x1) + (double)1.0)) - (double)3.0)) + ((x1 * x1) * (((double)4.0 * (((((double)3.0 * (x1 * x1)) + ((double)2.0 * x2)) - x1) / ((x1 * x1) + (double)1.0))) - (double)6.0))) * ((x1 * x1) + (double)1.0)) + (((double)3.0 * (x1 * x1)) * (((((double)3.0 * (x1 * x1)) + ((double)2.0 * x2)) - x1) / ((x1 * x1) + (double)1.0)))) + ((x1 * x1) * x1)) + x1) + ((double)3.0 * (((((double)3.0 * (x1 * x1)) + ((double)2.0 * x2)) - x1) / ((x1 * x1) + (double)1.0)))));

}

}

	stop_emeasure(sockfd); 

	return 0;
}
