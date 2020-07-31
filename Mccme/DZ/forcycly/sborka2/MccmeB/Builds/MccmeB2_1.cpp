
#include <iostream>
using namespace std;
int main()
{
    int N, b;
    int c = 1;
    cin >> N;
    for (int i = 1; i < N; i++) {
        c = c * i;
    }
    cout << c<<endl;
    return 0;
}
