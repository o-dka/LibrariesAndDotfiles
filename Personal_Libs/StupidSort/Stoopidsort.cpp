#include "StoopidSort.h" // Sorts by using two sort technique 
void StoopidSort (int *a, int n) { // Input is an array and an amount of numbers in it 
	for ( int i = 0 ;i < n - 1;i++) {
		for ( int j = i+1 ;j < n;j++) {
			if (a[i] > a[j]) {
				int c =a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}