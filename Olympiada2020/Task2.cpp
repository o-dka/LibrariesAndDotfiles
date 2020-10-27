#include <iostream>
using namespace std;
int main(){
int x,y,answer;
int chsum=0,nechsum=0;
cin>>x>>y;
for (int i = y;i<x;i++){
    if (i%2 == 0 )
        chsum+=i;
    else
        nechsum+=i;
}
answer = chsum-nechsum;
cout<<answer<<endl;
return 0;
}
