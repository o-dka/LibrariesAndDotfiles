#include <iostream>
using namespace std;
int main()
{
    const int zero = 0;
    int numb;
    int N;
    cin >> N;
    for (int i = 0; i <= N; i++) {
        cin >> numb;
        if (numb == zero) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
