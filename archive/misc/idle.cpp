#include <iostream>

#include "../../emeasure.h" 

using namespace std;

int main (int argc, char ** argv) { 
	float x = 1.20985166662;

	assert(argc == 2); 
	int sockfd = start_emeasure(string("idle-") + string(argv[1]) + ".csv"); 

	sleep(10); 

	stop_emeasure(sockfd); 

	return 0;
}
