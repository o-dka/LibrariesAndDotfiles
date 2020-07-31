#include <iostream>
using namespace std;
//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
int main(){
int Number;
int i = 2;
int Delgo;
cin>>Number; 
while( i <= Number){
    Delgo = Number % i;
    if (Delgo == 0) {
        cout<<i<<endl;
        break;
    }
    i++;
}

/*
i = 2; 
while (Number % i != 0)
    i++;
cout<<i;
*/


return 0;
}