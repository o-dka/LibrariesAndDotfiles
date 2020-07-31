
#include <iostream>
using namespace std;
int main()
{
	long int n, a;
	long int c = 1;
	long int summka = 0;
	cin >> a;
	cin >> n;
	for (long int i = 0; i <= n; i++) {
		summka += c;
		c = a * c;
	}
	cout << summka << endl;
	return 0;
}