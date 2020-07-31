#include <iostream>
using namespace std;
#define zero 0
int main()
{

	int n;
	int Numbs;
	int zero_count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> Numbs;
		if (Numbs == zero) {
			zero_count++;
		}
	}
	cout << zero_count;
	return 0;
}