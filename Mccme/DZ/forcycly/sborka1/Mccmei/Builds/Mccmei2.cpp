
#include <iostream>
using namespace std;
int main()
{
    int count=0;
    long int n =0;
    cin >> n;
    for (int x = 1; x <= n/2; ++x) {
        if (n % x == 0) {
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}
