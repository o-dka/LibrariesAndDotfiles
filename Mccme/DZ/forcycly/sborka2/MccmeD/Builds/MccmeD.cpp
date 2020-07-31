#include <iostream>
using namespace std;
int factorial(int factz) {
    int answerz = 1;
    for (int i = 2; i <= factz; i++) {
        answerz = answerz * i;
    }
    return answerz;
}

int main()
{
    int N, k, a;
    cin >> N >> k;

    a = factorial(N) / (factorial(k) * factorial(N - k));

    cout << a << endl;
    return 0;
}
