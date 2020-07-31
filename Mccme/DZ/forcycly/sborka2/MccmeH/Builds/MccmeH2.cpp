using namespace std;
#include <iostream>
int main()
{
	int n, q = 1, k = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		//cout<<q<<' '<<k<<endl;
		q = q * 2;
		k += q;

	}
	cout << k << endl;
	return 0;
}