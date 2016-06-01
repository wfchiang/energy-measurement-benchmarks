
#include <stdio.h> 
#include <assert.h> 

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

  F0 a0 = 0.456; 
  F0 a1 = 0.775; 
  F0 a2 = -0.446; 
  F0 b0 = -0.367; 
  F0 b1 = -0.892; 
  F0 b2 = 0.203; 
  F0 c0 = -0.392; 
  F0 c1 = 0.539; 
  F0 c2 = -0.789; 
  F0 d0 = 0.101; 
  F0 d1 = -0.689; 
  F0 d2 = 0.090; 
  F0 e0 = -0.711; 
  F0 e1 = 0.882; 
  F0 e2 = 0.199; 

  for (int i = 0 ; i < N_REPEATS ; i++) {
    F1 ae_0 = (F1)a0 - (F1)e0; 
    F1 ae_1 = (F1)a1 - (F1)e1; 
    F1 ae_2 = (F1)a2 - (F1)e2; 
      
    F2 be_0 = (F2)b0 - (F2)e0; 
    F2 be_1 = (F2)b1 - (F2)e1; 
    F2 be_2 = (F2)b2 - (F2)e2; 
    
    F3 ce_0 = (F3)c0 - (F3)e0; 
    F3 ce_1 = (F3)c1 - (F3)e1; 
    F3 ce_2 = (F3)c2 - (F3)e2; 

    F4 de_0 = (F4)d0 - (F4)e0; 
    F4 de_1 = (F4)d1 - (F4)e1; 
    F4 de_2 = (F4)d2 - (F4)e2; 
    
    F5 ae2  = 
      ((F5)ae_0 * (F5)ae_0) + 
      ((F5)ae_1 * (F5)ae_1) + 
      ((F5)ae_2 * (F5)ae_2); 

    F6 be2  = 
      ((F6)be_0 * (F6)be_0) + 
      ((F6)be_1 * (F6)be_1) + 
      ((F6)be_2 * (F6)be_2); 

    F7 ce2  = 
      ((F7)ce_0 * (F7)ce_0) + 
      ((F7)ce_1 * (F7)ce_1) + 
      ((F7)ce_2 * (F7)ce_2); 

    F8 de2  = 
      ((F8)de_0 * (F8)de_0) + 
      ((F8)de_1 * (F8)de_1) + 
      ((F8)de_2 * (F8)de_2); 
    
    F15 m0 = 
      MDet3x3<F9, F10, F11, F12, F13, F14, F15, F2, F2, F6, F3, F3, F7, F4, F4, F8>
      (be_1, be_2, be2, 
       ce_1, ce_2, ce2, 
       de_1, de_2, de2); 

    F22 m1 = 
      MDet3x3<F16, F17, F18, F19, F20, F21, F22, F2, F2, F6, F3, F3, F7, F4, F4, F8>
      (be_0, be_2, be2, 
       ce_0, ce_2, ce2, 
       de_0, de_2, de2); 

    F29 m2 = 
      MDet3x3<F23, F24, F25, F26, F27, F28, F29, F2, F2, F6, F3, F3, F7, F4, F4, F8>
      (be_0, be_1, be2, 
       ce_0, ce_1, ce2, 
       de_0, de_1, de2); 

    F36 m3 = 
      MDet3x3<F30, F31, F32, F33, F34, F35, F36, F2, F2, F2, F3, F3, F3, F4, F4, F4>
      (be_0, be_1, be_2, 
       ce_0, ce_1, ce_2, 
       de_0, de_1, de_2); 

    F37 rel = ((F37)ae_0 * (F37)m0 + (F37)ae_2 * (F37)m2) - ((F37)ae_1 * (F37)m1 + (F37)ae2 * (F37)m3); 
  }
    
  return 0; 
}
