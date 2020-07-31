// MccmeC.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
using namespace std;
int main()
{
	int N;
	int s = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		s = s * 2;
	}
	cout << s << endl;
	return 0;
}

