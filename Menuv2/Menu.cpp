#include <iostream>
using namespace std;

int main(){
int divn,subn,curn,desn,count;
ChangetheJ(divn,subn,curn,desn);
Fibonachinums(count);
    
}
void Fibonachinums(int count){
int presentF=1;
int pastF1=1, pastF2=1;
int i=3; 
cout<<"How much  fibonachi numbers you want to see?"<<endl;
cin>>count;
cout<<pastF1<<endl;
while(i<=count){
    presentF=pastF1+pastF2;
    pastF1 =pastF2;
    pastF2 =presentF;
    cout<<presentF<<endl;
    i++;
}
cout<<"==========="<<endl;
cout<<"Here is"<<count<<"of the fibonachi numbers"<<endl;  
}
void ChangetheJ(int curn,int desn,int divn,int subn){
cout<<"please enter your current number"<<endl;
cin>>curn;
cout<<"please enter your desired number"<<endl;
cin>>desn;
cout<<"please enter the number you want to divide you current number to"<<endl;
cin>>divn;
cout<<"please enter the number you want to subtract your current number from "<<endl;
cin>>subn;
while(curn!=desn){
    if (curn%divn == 0 && curn/divn >= desn){
        curn /= divn;
        cout<< ":"<< divn<<endl;
    }
    else
    {
        curn= curn-subn;
        cout<< "-"<< subn<<endl;
    }
}
}