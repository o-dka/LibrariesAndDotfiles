#include <iostream>
using namespace std;
int main()
{
    const int mill = 1000000;
    int a, n, c;
    int L = 0;
    cin >> n;
    int stchechigk = 0;
    for (int i = 1; i <= mill; i++) {
        for (int j = 0; j < i; j++) {
            cout << i << ' ';
            stchechigk++;
            if (stchechigk == n)
                return 0;
        }
    }

    return 0;
}
