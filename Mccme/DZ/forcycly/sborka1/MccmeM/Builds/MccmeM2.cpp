#include <iostream>
using namespace std;
int main()
{
	const int zero = 0;
	int n;
	int Nums;
	int zerocount;
		cin >> Nums;
		cin >> n;
	for (int i; i <= n; i++) {
		if (Nums == zero) {
			zerocount++;

		}
	
	}

	cout << zerocount;
	return 0;
}
