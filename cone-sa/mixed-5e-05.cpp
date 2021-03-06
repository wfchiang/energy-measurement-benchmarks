
#include <stdio.h> 
#include <math.h> 
#include "myrand.h" 

#define PI 3.14159265

#define FPT_0 double 
#define FPT_1 double 
#define FPT_2 double 
#define FPT_3 double 
#define FPT_4 double 
#define FPT_5 double 
#define FPT_6 float 
#define FPT_7 double 
#define FPT_8 double 



int main (int argc, char *argv[]) {
  FPT_0 r    = randFP32(1.0, 10.0); 
  FPT_1 h    = randFP32(1.0, 10.0); 

  FPT_2 h2   = (FPT_2)h * (FPT_2)h; 
  FPT_3 r2   = (FPT_3)r * (FPT_3)r; 
  FPT_4 hr2  = (FPT_4)h2 + (FPT_4)r2; 
  FPT_5 pir  = (double)PI * (FPT_5)r; 

  FPT_6 tm1  = sqrtf((FPT_6)hr2); 
  FPT_7 tm2  = (FPT_7)r + (FPT_7)tm1; 
  FPT_8 rel  = (FPT_8)pir * (FPT_8)tm2; 
  
  return 0; 
}
