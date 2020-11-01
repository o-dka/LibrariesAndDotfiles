#include <iostream>
using namespace std;
int main()
{
int a,b;
cin >> a >> b;
 
int chsum=0,nechsum=0;
for(int i=a; i<=b; i++)
    if (i%2==0) 
        chsum+=i;
    else
       nechsum+=i;

cout << chsum-nechsum;
return 0;
}