#include <iostream>
using namespace std;
// --------------
#include "Stoopid.h" // Sorts by using two sort technique 
void StoopidSort (int *a, int n) {
	for( int i = 0 ;i < n - 1;i++){
		for( int j = i+1;j < n;j++){
			if (a[i] > a[j]){
				int c =a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}