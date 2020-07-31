#include <iostream>
using namespace std;
#define Decade 10
int main(){
    //вывести на экран 10 первых чисел Фиббоначи:
    // a_n = a_n-1+a_n-2
    // 1 1 2 3 5 8 13 21 34
    // _  _ p1 p2 pr

int presentF=1;
int pastF1=1, pastF2=1;
int i=3; 
cout<<pastF1<<endl;
while(i<=Decade){
    presentF=pastF1+pastF2;
    pastF1 =pastF2;
    pastF2 =presentF;
    cout<<presentF<<endl;
    i++;
}
return 0;  
}