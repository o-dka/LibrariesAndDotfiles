#include <iostream>
using namespace std;
int main()
{
	int n, a;
	int c = 1;
	int summka = 0;
	cin >> a;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		summka += c;
		c = a * c;
	}
	cout << summka << endl;
	return 0;
}
