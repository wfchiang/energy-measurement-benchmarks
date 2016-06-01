
#include <stdio.h> 
#include <assert.h> 
#include "myrand.h" 


#define N_REPEATS 100000000

template<class T1, class T2, class T3, class T4, class T5, class T6, class T7, class D0, class D1, class D2, class D3, class D4, class D5, class D6, class D7, class D8> 
inline 
T7 
MDet3x3 (D0 m0, D1 m1, D2 m2, 
	 D3 m3, D4 m4, D5 m5, 
	 D6 m6, D7 m7, D8 m8) {

  T1 p0 = (T1)m0 * (T1)m4 * (T1)m8;
  T2 p1 = (T2)m3 * (T2)m7 * (T2)m2; 
  T3 p2 = (T3)m6 * (T3)m5 * (T3)m1; 

  T4 n0 = (T4)m2 * (T4)m4 * (T4)m6; 
  T5 n1 = (T5)m5 * (T5)m7 * (T5)m0; 
  T6 n2 = (T6)m8 * (T6)m3 * (T6)m1; 

  T7 rel = ((T7)p0 + (T7)p1 + (T7)p2) - ((T7)n0 + (T7)n1 + (T7)n2); 
  
  return rel; 
}


int main (void) {

  F0 a0 = randFP32(-1.0, 1.0); 
  F0 a1 = randFP32(-1.0, 1.0); 
  F0 b0 = randFP32(-1.0, 1.0); 
  F0 b1 = randFP32(-1.0, 1.0); 
  F0 c0 = randFP32(-1.0, 1.0); 
  F0 c1 = randFP32(-1.0, 1.0); 
  F0 d0 = randFP32(-1.0, 1.0); 
  F0 d1 = randFP32(-1.0, 1.0); 

  for (int i = 0 ; i < N_REPEATS ; i++) {
    F1 ad_0 = (F1)a0 - (F1)d0; 
    F1 ad_1 = (F1)a1 - (F1)d1; 
    
    F2 bd_0 = (F2)b0 - (F2)d0; 
    F2 bd_1 = (F2)b1 - (F2)d1; 
    
    F3 cd_0 = (F3)c0 - (F3)d0; 
    F3 cd_1 = (F3)c1 - (F3)d1; 
    
    F4 ad2  = ((F4)ad_0 * (F4)ad_0) + ((F4)ad_1 * (F4)ad_1); 
    
    F5 bd2  = ((F5)bd_0 * (F5)bd_0) + ((F5)bd_1 * (F5)bd_1); 
    
    F6 cd2  = ((F6)cd_0 * (F6)cd_0) + ((F6)cd_1 * (F6)cd_1); 
    
    F13 rel = MDet3x3<F7, F8, F9, F10, F11, F12, F13, F1, F1, F4, F2, F2, F5, F3, F3, F6>
      (ad_0, ad_1, ad2, 
       bd_0, bd_1, bd2, 
       cd_0, cd_1, cd2); 
  }
    
  return 0; 
}
