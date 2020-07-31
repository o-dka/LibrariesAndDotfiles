#include <iostream>
using namespace std;
int main() {
    int n;
    int nie;
    int sumnie = 0;
    //
    cin >> n;
    //
    for (int i =0; i < n; i++) {
        //
        cin >> nie;
        sumnie+= nie;
    }   cout << sumnie;
   return 0;
}  
        
