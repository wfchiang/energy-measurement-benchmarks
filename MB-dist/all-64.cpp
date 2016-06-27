
#include <stdio.h> 
#include <math.h> 
#include "myrand.h" 

#define FPT_0  double 
#define FPT_1  double 
#define FPT_2  double 
#define FPT_3  double 
#define FPT_4  double 
#define FPT_5  double 
#define FPT_6  double 
#define FPT_7  double 
#define FPT_8  double 
#define FPT_9  double 
#define FPT_10 double 


int main (int argc, char *argv[]) {

  FPT_0 x   = randFP32(0.0, 20.0); 
  FPT_0 a   = randFP32(1.0, 5.0); 

  FPT_1 x2  = (FPT_1)x * (FPT_1)x; 
  FPT_2 a2  = (FPT_2)a * (FPT_2)a; 
  FPT_3 a3  = (FPT_3)a * (FPT_3)a2; 

  FPT_4 e_0 = (FPT_4)(double)-1.0 * (FPT_4)x2; 
  FPT_5 e_1 = (FPT_5)(double)2.0  * (FPT_5)a2; 
  FPT_6 e_2 = (FPT_6)e_0 / (FPT_6)e_1; 
  FPT_7 e   = exp((FPT_7)e_2); 

  FPT_8 d_0 = (FPT_8)x2 * (FPT_8)e; 
  FPT_9 d   = (FPT_9)d_0 / (FPT_9)a3; 

  FPT_10 rel = (FPT_10)(double)0.797884561 * (FPT_10)d; 

  return 0;
}
    
