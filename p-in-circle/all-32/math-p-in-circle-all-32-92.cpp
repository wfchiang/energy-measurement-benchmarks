#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char **argv) {
	float a = 0.899398090764;
	float c = 0.784144795995;
	float b = 0.947076285789;
	float d = -0.470405252076;

	for (int ii = 0 ; ii < 10000000 ; ii++) {
	float ____expr_0 = ((((((a - d) * (b - d)) * (((c - d) * (c - d)) + ((c - d) * (c - d)))) + (((b - d) * (c - d)) * (((a - d) * (a - d)) + ((a - d) * (a - d))))) + (((c - d) * (((b - d) * (b - d)) + ((b - d) * (b - d)))) * (a - d))) - (((((((a - d) * (a - d)) + ((a - d) * (a - d))) * (b - d)) * (c - d)) + (((((b - d) * (b - d)) + ((b - d) * (b - d))) * (c - d)) * (a - d))) + (((((c - d) * (c - d)) + ((c - d) * (c - d))) * (b - d)) * (a - d))));

}

	return 0;
}
