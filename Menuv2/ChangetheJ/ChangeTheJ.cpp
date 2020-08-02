#include <iostream>
using namespace std;
int main(){
int n,m,x,y;
cin>>n>>m>>x>>y;
while(n!=m){
    if (n%x == 0 && n/x >= m){
        n /= x;
        cout<< ":"<< x<<endl;
    }
    else
    {
        n= n-y;
        cout<< "-"<< y<<endl;
    }
}
return 0;
}