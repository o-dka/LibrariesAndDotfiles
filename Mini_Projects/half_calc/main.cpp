#include <cmath>
#include <iostream>
#include <string>
#define COUNTER 7
using namespace std;
double formula(double y, int pew, double input) { return pow(y, pew) - input; }

int main()
{
	double left_br, right_br, mid, left_br_res, right_br_res, mid_res, in_number;
	int in_fact;
	cin >> left_br >> right_br >> in_fact >> in_number;
	printf("=========================================================================\n");
	printf(" L | R | M || L_v | M_v | R_v \n");
	printf("=========================================================================\n");
	int count = COUNTER;
	while (count--) {
		mid = (left_br + right_br) / 2;
		left_br_res = formula(left_br, in_fact, in_number);
		right_br_res = formula(right_br, in_fact, in_number);
		mid_res = formula(mid, in_fact, in_number);
		printf(" %f | %f | %f || %f | %f | %f |\n", left_br, right_br, mid, left_br_res, right_br_res, mid_res);
		if (count > 1) {
			if (mid_res < 0)
				left_br = mid;
			else if (mid_res > 0)
				right_br = mid;
		}
		else
			continue;
	}
	double print_val = right_br > left_br ? right_br : left_br;
	printf("%0.3f\n", print_val);
	return 0;
}
