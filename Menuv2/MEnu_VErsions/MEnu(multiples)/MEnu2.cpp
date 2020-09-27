#include <iostream>
using namespace std;
class CalcMenu {
public:




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
void Fibonum(int count ,int presentF,int pastF1,int pastF2,int i){
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
 cout<<"Here is "<<count<<" of the fibonachi numbers"<<endl;
}
int menu(){
 //for calculation purposes(i.e finding numbers and stuff)(it's a test btw)
 int input;
do{
    cin>>input;
    if (input == 1){
    int x,y,z,u;
    ChangetheJ(x,y,z,u);
    }
    if(input == 2){
    int c,v,b,n,m;
    Fibonum(c,v,b,n,m);
    }
}while(input!=0);
}
};
