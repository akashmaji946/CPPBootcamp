

// SORTED ORDER (COMPULSORY)


//   4 8 10 13 16 20 28 31
//   0 1  2  3  4  5  6  7
// n = 8

// key = 13

#include <iostream>
using namespace std;

int binary_search(int* arr, int n, int key){
	int start = 0;
	int end = n-1;

	while(start <= end){
		int mid = (start + end)/2;
		// 0+7  => 3.5 => 3

		int item = arr[mid];  // 13
		if(item > key){
			end = mid-1;
		}else if(item < key){
			start = mid+1;
		}else{
			return mid;
		}
	}
	return -1;

}

int main(){
	int arr[8] = {4, 8, 10, 13, 16, 20, 28, 31};
	int n = 8;

	int idx = binary_search(arr, n, 31);
	
	if(idx != -1){
     cout << "Item is found at: " << idx << endl; 
	 cout << "ITEM IS: "  << arr[idx] << endl; 

	}else{
		cout << "Item not found " << endl;
	}
	return 0;
}