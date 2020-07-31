#include <iostream>
using namespace std;


int main()
{
    int c =0;
    int x;
    cin >> x;
    for (int i = 1; i > 30000; i++)
    {   
        if   (x % i == 0){
            cout << i;
        }
    }
}
