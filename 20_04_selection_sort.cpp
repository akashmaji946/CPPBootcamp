

// 9 7 3 4

// step 1
// min = 3
// // 3 7 9 4

// step 2
// min = 4
// // 3 4 9 7

// step 3
// min = 7
// // 3 4 7 9

#include <iostream>
using namespace std;

void selection_sort(int* arr, int n){
	// passes = n-1
	for(int pass = 0; pass <= n-2; pass++){
		// find the smallest element
		int mini = pass;
		int minv = arr[pass];
		for(int i = pass; i < n; i++){
			if(arr[i] < minv){
				minv = arr[i];
				mini = i;
			}
		}
		swap(arr[pass], arr[mini]);
	}
	return;
}

void print_array(int* arr, int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
	int arr[7] = {8, 6, 5, 4, 3, 1, -8};
	int n = 7;
	selection_sort(arr, n);
	print_array(arr, n);
	return 0;
}