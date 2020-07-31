#include <iostream>
using namespace std;

int main()
{
	//const int m = 1000000;
	int a, n, c;
	int L = 0;
	cin >> n;
	for (int i = 1; i < n;i++) {
		L++;
		cout << i;
		if (i == L) {
		 i++;
		 L =0;
		}


	}

   cout << "Hello World!\n";
}

