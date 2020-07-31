
#include <iostream>
using namespace std;
int main()
{
    int  N;
    int c = 1;
    cin >> N;
    for (int i = 2; i < N; i++) {
        c *= i;
    }
    cout << c<<endl;
    return 0;
}
