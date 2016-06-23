
#include <stdio.h> 
#include "myrand.h" 

#define FPT_0  float 
#define FPT_1  double 
#define FPT_2  float 
#define FPT_3  float 
#define FPT_4  double 
#define FPT_5  double 
#define FPT_6  double
#define FPT_7  double
#define FPT_8  double
#define FPT_9  double
#define FPT_10 float 
#define FPT_11 float 
#define FPT_12 double 
#define FPT_13 float 
#define FPT_14 float 
#define FPT_15 float 
#define FPT_16 double
#define FPT_17 float
#define FPT_18 float
#define FPT_19 float
#define FPT_20 float 
#define FPT_21 float 
#define FPT_22 float 
#define FPT_23 float 
#define FPT_24 float 
#define FPT_25 float 
#define FPT_26 float
#define FPT_27 float


int main (int argc, char *argv[]) {
  FPT_0 var_x1 = randFP32(-5.0, 5.0); 
  FPT_1 var_x2 = randFP32(-20.0, 50); 

  FPT_2 temp0 = (FPT_2)var_x1 * (FPT_2)var_x1; 
  FPT_3 temp1 = (FPT_3)temp0  * (FPT_3)var_x1; 

  FPT_4 sub2_0 = (FPT_4)((FPT_5)(3.0 * (FPT_6)temp0) + (FPT_5)(2.0 * (FPT_7)var_x2)) - (FPT_4)var_x1;
  FPT_8 sub2_1 = (FPT_8)temp0 + (FPT_8)1.0; 
  FPT_9 sub2   = (FPT_9)sub2_0 / (FPT_9)sub2_1; 

  FPT_10 sub3_0_0_0 = (FPT_10)(2.0 * (FPT_11)var_x1) * (FPT_10)sub2; 
  FPT_12 sub3_0_0_1 = (FPT_12)sub2 - 3.0; 
  FPT_13 sub3_0_0   = (FPT_13)sub3_0_0_0 * (FPT_13)sub3_0_0_1; 
  FPT_14 sub3_0_1   = (FPT_14)temp0 * (FPT_14)((FPT_15)(4.0 * (FPT_16)sub2) - 6.0); 
  FPT_17 sub3_0     = (FPT_17)sub3_0_0 + (FPT_17)sub3_0_1; 
  FPT_18 sub3_1     = (FPT_18)temp0 + 1.0; 
  FPT_19 sub3       = (FPT_19)sub3_0 * (FPT_19)sub3_1; 


  FPT_20 rel_temp0 = (FPT_20)((FPT_21)((FPT_22)sub3 + (FPT_22)((FPT_23)(3.0 * (FPT_24)temp0) * (FPT_23)sub2)) + (FPT_21)temp1) + (FPT_20)var_x1;
  FPT_25 rel_temp1 = 3.0 * (FPT_25)sub2; 
  FPT_26 rel = (FPT_26)var_x1 + (FPT_26)((FPT_27)rel_temp0 + (FPT_27)rel_temp1); 

  return 0; 
}
    

