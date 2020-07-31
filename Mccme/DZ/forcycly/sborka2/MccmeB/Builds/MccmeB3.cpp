
#include <iostream>
using namespace std;
int main()
{
    float  N, b;
    float c = 1;
    cin >> N;
    for (int i = 1; i < N; i++) {
        c = c * i;
    }
    cout << c<<endl;
    return 0;
}
