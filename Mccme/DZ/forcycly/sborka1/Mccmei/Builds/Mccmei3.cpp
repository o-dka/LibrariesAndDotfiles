#include <iostream>
using namespace std;
//Подсчитайте количество натуральных делителей числа x 
int main()
{
    int count = 1;
    long int n = 0;
    cin >> n;
    //for( начало, до какого числа считает, как считаем)
    for (long int x = 1; x <= n / 2; x++) { //10 1,2,5,10
        if (n % x == 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
