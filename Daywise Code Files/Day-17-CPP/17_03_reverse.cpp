#include <iostream>
using namespace std;

void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void reverse(int arr[], int n){
	// LOGIC:
	// n => n/2
	// [1, 2, 5, 6] => [6, 2, 5, 1] => [6, 5, 2, 1]

	// 0 -> (n-1)
	// 1 -> (n-2)
// arr[0], arr[n-1]
// arr[1], arr[n-2]
// arr[3], arr[n-4]
// arr[i], arr[n-1-i]


   for(int times = 0; times < (n/2); times++){
	   swap(arr[times], arr[n-1-times]);
   }
   return;
}


int main(){

	// [1, 3, 4, 5] => [5, 4, 3, 1]

	int n;
	cin >> n;

	int arr[10001];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	// BEFORE REVERSING
	print(arr, n);

	reverse(arr, n);

	// AFTER REVERSING
	print(arr, n);



	return 0;
}