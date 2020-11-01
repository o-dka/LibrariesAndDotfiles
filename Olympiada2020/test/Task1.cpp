#include <iostream>
using namespace std;
#define UTC 0
int main(){
int UTCTanya,UTCPodruga,TimeTanya,Answer;
cin>> UTCTanya >> UTCPodruga >>TimeTanya;
int UTCTime = TimeTanya-UTCTanya;
Answer = UTCTime + UTCPodruga;
cout<<Answer<<endl;
}