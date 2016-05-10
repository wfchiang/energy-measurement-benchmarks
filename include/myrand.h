
#include <stdlib.h> 
#include <assert.h> 
#include <time.h> 

#define RANDK 1000000


inline 
float  randFP32 (float  lb, float  ub) {
  assert(lb <= ub); 

  return (ub - lb) * ((float)(rand() % RANDK) / (float)RANDK) + lb; 
}


inline 
double randFP64 (double lb, double ub) {
  assert(lb <= ub); 

  return (ub - lb) * ((double)(rand() % RANDK) / (double)RANDK) + lb; 
}
