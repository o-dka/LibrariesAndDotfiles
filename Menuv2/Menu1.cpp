#include <iostream>
using namespace std;

int main(){
int x,y,n,m;
ChangetheJ(x,y,n,m);

    
}

void ChangetheJ(int n,int m,int x,int y){
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
}