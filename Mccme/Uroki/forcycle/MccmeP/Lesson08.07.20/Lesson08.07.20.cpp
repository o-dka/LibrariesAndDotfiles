#include <iostream>
using namespace std;
#define k 1000
int main()
{

        int f;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int x = 0; x <= k; x++) {

            //ax3 + bx2 + cx + d 
            f = (a * x * x * x) + (b * x * x) + (c * x) + d;
            if (f == 0)
                cout << x << ' ';
        }
        //на отрезке [0,1000] и выведите их в

        return 0;
    


}
