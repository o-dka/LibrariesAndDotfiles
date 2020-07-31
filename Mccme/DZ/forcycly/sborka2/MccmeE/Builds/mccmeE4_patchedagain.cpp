
#include <iostream>
using namespace std;
int main()
{ //По данному действительному числу a и натуральному n вычислите сумму
	double a, summka = 0, c = 1;
	unsigned long int n;
	cin >> a;
	cin >> n;
	for (unsigned long int i = 0; i <= n; i++) {
		summka += c;
		c = a * c;
	}
	cout << summka << endl;
	return 0;
}
