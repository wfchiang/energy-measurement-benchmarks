#include <iostream>
#include <math.h> 
#include "micro-common.h"

using namespace std;

int main (int argc, char **argv) {
  double x   = randFP64(-15.0, 15.0); // -9.65757320639;
  double ave = randFP64(-5.0, 5.0); // 0.0943341206552;
  
  for (int ii = 0 ; ii < 1000000000 ; ii++) {
    double ____expr_0 = ((1.0 / (1.0 * 2.50662827463)) * (expf((-1.0 * (((x - ave) * (x - ave)) / (2.0 * (1.0 * 1.0)))))));

  }

  return 0;
}
