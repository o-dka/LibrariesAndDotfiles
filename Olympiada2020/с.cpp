#include <iostream>
using namespace std;
int main(){
int a,i,C=0;
cin>>a;
long int massa[a],b[a];
for(i=0;i<a;i++){
        cin>>massa[i];
        b[i]=massa[i];
        C+=b[i];
}

for(i=0; i<a; i++){
//для b[i] мы должны проверить кого он может скушать и какой результат у него получится
    for(int j=0;j<a;j++){
        if( (b[i]>massa[j]) and (i!=j))
            b[i]+=massa[j];
    }    
}
 

 for(i = 1; i < a; i++){
   if (b[i]== C)
      cout<<1<<endl;
  else
      cout<<0<<endl;
}
return 0;
} 
//1 1 5 100
//1 1 7 107