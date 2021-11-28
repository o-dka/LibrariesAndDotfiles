#include <cmath>
#include <iostream>
#include <string>
#define COUNTER 7
/* calculates approx value of a rooted number (e.i qrt(17))
 =====================================================

(-------Variables used--------)
doubles:
 * left_br
 * right_br
 * mid
 * left_br_res
 * right_br_res
 * mid_res
 * in_numbr
ints:
 * in_fact
(--------Explaining what is what--------)
> left_br is the left border , right_br is the right border middle is half of the sum of left_br and right_br
	example:
		 0 < n < 9
		 0 is left_br
		 9 is right_br
		 mid = (left_br+right_br)/2 = 4.5
> left_br_res is  a result of left_br being used instead of y
	example:
		left_br_res = (left_br^4) - 17
> same goes for  right_br_res and mid_res
*/
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
