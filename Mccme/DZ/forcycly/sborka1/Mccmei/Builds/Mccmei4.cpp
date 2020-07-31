#include <iostream>
#include <math.h> 

using namespace std;
//Подсчитайте количество натуральных делителей числа x 
int main()
{

    //если корень квадратный - целое число,то +1 к счетчику 

    int count = 0;
    long int n = 0;
    cin >> n;

    //for( начало, до какого числа считает, как считаем)
    for (long int x = 1; x <= sqrt(n) - 1; x++) {
        if (n % x == 0) {
            count++;
        }
    }
    count *= 2;
    if (round(sqrt(n)) == sqrt(n))
        count++;

    cout << count << endl;
    return 0;
}
