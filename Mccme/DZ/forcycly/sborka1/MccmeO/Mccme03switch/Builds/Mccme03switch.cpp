#include <iostream>
using namespace std;
int main()
{
    int numb;
    int N;
    cin >> N;
    cin >> numb;
    for (int i; i <= N; i++) {
        switch (numb) {
        case 0:
            cout << "YES" << endl;
            break;
        default:
            cout << "NO" << endl;
        }
    }
    return 0;
}
