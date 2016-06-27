
#include <stdio.h> 
#include <math.h> 
#include "myrand.h" 

#define FPT_0  float 
#define FPT_1  float 
#define FPT_2  float 
#define FPT_3  float 
#define FPT_4  float 
#define FPT_5  float 
#define FPT_6  float 
#define FPT_7  float 
#define FPT_8  float 
#define FPT_9  float 
#define FPT_10 float 


int main (int argc, char *argv[]) {

  FPT_0 x   = randFP32(0.0, 20.0); 
  FPT_0 a   = randFP32(1.0, 5.0); 

  FPT_1 x2  = (FPT_1)x * (FPT_1)x; 
  FPT_2 a2  = (FPT_2)a * (FPT_2)a; 
  FPT_3 a3  = (FPT_3)a * (FPT_3)a2; 

  FPT_4 e_0 = (FPT_4)(double)-1.0 * (FPT_4)x2; 
  FPT_5 e_1 = (FPT_5)(double)2.0  * (FPT_5)a2; 
  FPT_6 e_2 = (FPT_6)e_0 / (FPT_6)e_1; 
  FPT_7 e   = expf((FPT_7)e_2); 

  FPT_8 d_0 = (FPT_8)x2 * (FPT_8)e; 
  FPT_9 d   = (FPT_9)d_0 / (FPT_9)a3; 

  FPT_10 rel = (FPT_10)(double)0.797884561 * (FPT_10)d; 

  return 0;
}
    
