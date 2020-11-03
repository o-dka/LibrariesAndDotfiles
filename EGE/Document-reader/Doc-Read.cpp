#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
string read;

ifstream file("Document.txt");

if( file.is_open()==true ){
    //если файл открылся успешно 
    for(file>>read; !file.eof(); file>>read)
        cout<<read<<endl;
}
else{
    cout<<"something's wrong";
}

return 0;    
}