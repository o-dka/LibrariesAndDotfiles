#include <iostream>
using namespace std;
int main()
{
	 double summka = 0;
	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		//cout<<(1/(i*i))<<endl;
		summka += 1 / (i * i * 1.0);

	}
	cout << summka << endl;
	return 0;
}