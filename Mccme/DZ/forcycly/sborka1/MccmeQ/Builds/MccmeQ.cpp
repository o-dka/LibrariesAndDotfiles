
#include <iostream>
using namespace std;
int main()
{
	const int zero = 0;
	int f = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int x = 1000; x >= zero; x--) {
		f = (a * x * x * x) + (b * x * x) + (c * x) + d;
		if (f == zero ) {
			cout << x << " ";
		}
	}
}

