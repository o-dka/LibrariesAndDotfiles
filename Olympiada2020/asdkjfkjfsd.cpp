#include <iostream>
using namespace std;
int main(){
int A,B;
cin >>A,B;
if (A+B%3 == 0|| A-B%3 == 0)
{
    cout<< 2<<endl;
    cout<< 1<<endl;
}
else
{
    cout<<-1<<endl;
}
return 0;
}
