#include <iostream>
#include <math.h> 
#include "micro-common.h"

using namespace std;

int main (int argc, char **argv) {
  float x   = randFP64(-15.0, 15.0); // -9.65757320639;
  float ave = randFP64(-5.0, 5.0); // 0.0943341206552;

  for (int ii = 0 ; ii < 1000000000 ; ii++) {
    float ____expr_0 = (((float)1.0 / ((float)1.0 * (float)2.50662827463)) * (exp2f(((float)-1.0 * (((x - ave) * (x - ave)) / ((float)2.0 * ((float)1.0 * (float)1.0)))))));

  }

  return 0;
}
