#include <iostream>
using namespace std;

//Дано натуральное число N. Выведите слово YES,
// если число N является точной степенью двойки, или слово NO в противном случае.
int main(){
int i =0;
int Number;
cin>>Number;
while(Number%2 == 0 )
    Number /= 2; 

if (Number==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

/*
ADDONS(в стоимость включено)
//тернарный оператор
cout<<(Number==1?"YES":"NO")<<endl;

пример:
if(condition)
    k=do1;
else
    k=do2;

k=condition?do1:do2;
 (lingo)
 if condition then k=do1 else k=do2
*/




/*
int Whatisthis(){
while(true)
{  
    if (i%2 == Number)
    {
        cout<<"YES"<<endl;
        break;
    }
    if(i%2 == Number)
    {
        cout<<"NO"<<endl;
        break;
    }
    i++;
}
}
*/
return 0;
}