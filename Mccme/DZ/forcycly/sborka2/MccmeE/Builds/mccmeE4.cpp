
#include <iostream>
using namespace std;
int main()
{ //По данному действительному числу a и натуральному n вычислите сумму
	double a;
	unsigned long int n, c = 1;
	unsigned long int summka = 0;
	cin >> a;
	cin >> n;
	for (unsigned long int i = 0; i <= n; i++) {
		summka += c;
		c = a * c;
	}
	cout << summka << endl;
	return 0;
}