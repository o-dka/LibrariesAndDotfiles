#include <iostream>
using namespace std;
int main(){
int K,N,c,l,l1;
    cin>>K>>N;
c =N/K;
l=N-(c*K);
c++;
l1=(K*c)-N;
    if (l1<l)
        cout<<l1<<endl;
    else
        cout<<l<<endl;
return 0;
}
