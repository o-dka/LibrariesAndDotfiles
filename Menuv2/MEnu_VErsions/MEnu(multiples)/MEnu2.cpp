#include <iostream>
using namespace std;
void Fibonum(int count,int presentF,int pastF1, int pastF2,int i);
void ChangetheJ(int curn,int desn,int divn,int subn);

void menu2(int x,int y,int z,int u,int c,int v,int b,int n,int m){
 //for calculation purposes(i.e finding numbers and stuff)
do{
    if
 int x,y,z,u;
    ChangetheJ(x,y,z,u);
 int c,v,b,n,m;
    
}while(i!=4);
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
           cout<<":"<<divn;
        }
        else
        {
            curn= curn-subn;
           cout<<"-"<<subn;
        }
    }

}
void Fibonum(int count ,int presentF,int pastF1,int pastF1,int i){
 presentF=1;
 pastF1=1;
 pastF2=1;
 i=3;
 cout<<"How much of the fibonachi number you want to see?"<<endl;
 cin>>count;
 cout<<pastF1<<endl;
 while(i<=count){
     presentF=pastF1+pastF2;
     pastF1 =pastF2;
     pastF2 =presentF;
     cout<<presentF<<endl;
     i++;
 }
 cout<<"Here is"<<count<<"of the fibonachi numbers"<<endl;
}