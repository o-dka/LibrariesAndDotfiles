
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int b = 1;
    for (int i = 2; i <= N; i++) {
        b = b * i;
    }
    cout << b<<endl;
    return 0;
}
