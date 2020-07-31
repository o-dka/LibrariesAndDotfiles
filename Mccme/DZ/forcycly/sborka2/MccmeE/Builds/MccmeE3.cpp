
#include <iostream>
using namespace std;
int main()
{ //-3791305220299560139
	unsigned long int n, a;
	unsigned long int c = 1;
	unsigned long int summka = 0;
	cin >> a;
	cin >> n;
	for (unsigned long int i = 0; i <= n; i++) {
		summka += c;
		c = a * c;
	}
	cout << summka << endl;
	return