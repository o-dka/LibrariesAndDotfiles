#include <iostream>
using namespace std;
int main(){
int divn,subn,curn,desn,count; //for calculation purposes(i.e finding numbers and stuff)
int ChangetheJ(divn,subn,curn,desn);
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