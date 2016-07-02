#include <iostream>
#include <math.h>

using namespace std;

#define FPTT_9999 double
#define FPTT_9 float
#define FPTT_8 double
#define FPTT_10 double
#define FPTT_5 double
#define FPTT_4 double
#define FPTT_7 double
#define FPTT_6 double
#define FPTT_0 double
#define FPTT_3 double

int main (int argc, char **argv) {

	for(int __r = 0 ; __r < 10000000 ; __r++) {
		FPTT_0 _var_expr_0 = -0.833341468242;
		FPTT_0 _var_expr_1 = 1.08336678174;
		FPTT_0 _var_expr_2 = 4.02110609753;
		FPTT_3 _var_expr_3 = (FPTT_3)_var_expr_1 * (FPTT_3)2.50662827463;
		FPTT_4 _var_expr_4 = (FPTT_4)1.0 / (FPTT_4)_var_expr_3;
		FPTT_5 _var_expr_5 = (FPTT_5)_var_expr_2 - (FPTT_5)_var_expr_0;
		FPTT_6 _var_expr_6 = (FPTT_6)_var_expr_5 * (FPTT_6)_var_expr_5;
		FPTT_7 _var_expr_7 = (FPTT_7)_var_expr_1 * (FPTT_7)_var_expr_1;
		FPTT_7 _var_expr_8 = (FPTT_7)2.0 * (FPTT_7)_var_expr_7;
		FPTT_8 _var_expr_9 = (FPTT_8)_var_expr_6 / (FPTT_8)_var_expr_8;
		FPTT_8 _var_expr_10 = (FPTT_8)-1.0 * (FPTT_8)_var_expr_9;
		FPTT_9 _var_expr_11 = expf((FPTT_9)_var_expr_10);
		FPTT_10 _var_expr_12 = (FPTT_10)_var_expr_4 * (FPTT_10)_var_expr_11;
	}

	return 0;
}