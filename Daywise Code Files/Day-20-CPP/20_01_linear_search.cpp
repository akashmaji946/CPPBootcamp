#include <iostream>
using namespace std;

// int array => int* arr
// char array => char* arr

// arrays == pointers
int lin_search(int* arr, int n, int item){
    int idx = -1;

	for(int i = 0; i < n; i++){
		if(arr[i] == item){
			idx = i;
			break;
		}
	}
	return idx;
}

int main() {

	int n;
	cin >> n;
	int item;
	cin >> item;

	int arr[10];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int idx = lin_search(arr, n, item);
	cout << "Item is at: " << idx << endl;
  
}