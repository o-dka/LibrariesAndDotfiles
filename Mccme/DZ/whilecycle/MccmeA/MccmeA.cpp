#include <iostream>
using namespace std;
int main(){
//Выведите все точные квадраты натуральных чисел, не превосходящие данного числа N.
int N;
cin>> N;
int i = 1;
int ipow = i*i;
while( ipow <= N )
{
    cout<< ipow <<endl; 
    i++;
    ipow = i*i;
    
}
return 0;
}
//19