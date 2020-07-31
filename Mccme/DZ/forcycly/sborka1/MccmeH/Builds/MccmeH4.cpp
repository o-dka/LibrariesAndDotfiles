#include <iostream>
using namespace std;

int main()
{
    int x, c = 0;
    cin >> x;
    for (int i = 1; i < 30000; i++)
    {
        if (x % i == 0) {
            cout << i << endl;
        }
    }

    return 0;

}