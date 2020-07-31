#include <iostream>
using namespace std;
int main()
{
	const int k = 1000;
	int zero = 0;
	int f = 0;
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	for (int x = 0; x <= k; x++) {
		if (((x - e) != 0) and (zero == ((a * x * x * x + b * x * x + c * x + d) / (x - e))))
		{
			f++;

		}
	}
	cout << f << endl;
	return 0;
}
