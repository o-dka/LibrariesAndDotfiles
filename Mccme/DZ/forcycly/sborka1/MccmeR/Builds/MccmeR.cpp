
#include <iostream>
using namespace std;
int main()
{
	const int k = 100;
	const int zero = 0;
	int f = 0;
	int a, b, c, d , e;
	cin >> a >> b >> c >> d >>e;
	for (int x = 0; x <= k; x++) {
		zero == ((a*x*x*x + b*x*x + c*x + d) / (x - e));
		if  (x||e !=0 ) {
			f++;
			cout << f <<endl;
		}
	}
	return 0;
}
