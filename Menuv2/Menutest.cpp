#include <iostream>
using namespace std;
void ChangetheJ(int divn,int subn,int curn,int desn);
int main(){
 //for calculation purposes(i.e finding numbers and stuff)

int x;
  return ChangetheJ();


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
        return":" divn;
    }
    else
    {
        curn= curn-subn;
       return "-"subn;
    }
}

}