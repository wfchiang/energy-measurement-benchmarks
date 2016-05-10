#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float r = 5.42736881099;
	float w = 0.888289488055;
	float v = -1.90918850625;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("turbine-1-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((float)3.0 + ((float)2.0 / (r * r))) - (((float)0.125 * ((float)3.0 - ((float)2.0 * v))) * (((w * w) * (r * r)) / ((float)1.0 - v)))) - (float)4.5);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
