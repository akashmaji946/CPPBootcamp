

// n=5

// 8 7 5 6 3 1
 
// PASS 1
//  n-1 comparisons
// PASS 2
//   n-2

// Pass 3
// n-3

// PASS 4
// n-4

#include <iostream>
using namespace std;

void print_array(int* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void bubble_sort(int* arr, int n){

	// n-1
	for(int pass = 1; pass <= n-1; pass++){
		// pairwise compare
		// arr[i], arr[i+1]
		for(int i = 0; i < n-1 ; i++){
           if(arr[i] > arr[i+1]){
			   swap(arr[i], arr[i+1]);
		   }
		}
		
	}
	return;
}

int main(){
	int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = 10;
	bubble_sort(arr, n);
	print_array(arr, n);
	return 0;
}


