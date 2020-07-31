#include <iostream>
using namespace std;
int main()
{

    int  n;
    int L = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        L = L + i * i;
        // cout<<i<<'+'<<i<<endl;
    }
    cout << L;
    return 0;
}
