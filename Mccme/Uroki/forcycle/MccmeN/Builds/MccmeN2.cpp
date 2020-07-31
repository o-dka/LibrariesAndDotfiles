#include <iostream>
#define zero 0
using namespace std;
int main() {
    int N, numbrs, numbrspos = 0, zerocount = 0, numbrnegev = 0;
    cin >> N;
    for (int x = 0; x < N; x++) {
        cin >> numbrs;
        if (numbrs == zero)
            zerocount++;

        if (numbrs > zero)
            numbrspos++;

        if (numbrs < zero)
            numbrnegev++;

    }

    cout << zerocount << ' ' << numbrspos << ' ' << numbrnegev;
    return 0;
}