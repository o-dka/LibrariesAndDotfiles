
#include <iostream>
using namespace std;
int main()
{
	int x;
	const int k = 100;
	const int zero = 0;
	int f = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int i = 0; i <= k; i++) {
		f = (a * x * x * x) + (b * x * x) + (c * x) + d;
		if (f == zero ) {
			cout << x << " ";
		}
	}
}

