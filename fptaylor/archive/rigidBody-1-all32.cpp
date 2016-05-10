#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char **argv) {
	float x2 = -7.54506065777;
	float x3 = -13.6278013553;
	float x1 = -2.588725514;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("rigidBody-1-all32") + string(argv[1]) + ".csv"); 

	for (int rr = 0 ; rr < 100 ; rr++) {

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = (((((float)-1.0 * (x1 * x2)) - ((float)2.0 * (x2 * x3))) - x1) - x3);

}

	}

	stop_emeasure(sockfd); 

	return 0;
}
