#include <iostream>
using namespace std;
int main(){
 //По данному числу N распечатайте все целые степени двойки, 
 //не превосходящие N, в порядке возрастания.   
int N;
int i = 1;
int ipow = 1;
cin>>N;
while(ipow<=N){
    cout<<ipow<<endl;
    ipow = 2*ipow;
    i++;
}
return 0;
}
