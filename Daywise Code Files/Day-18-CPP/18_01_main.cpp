#include <iostream>
using namespace std;


int main() {

	int arr[3][4];

	// 2d array => input
	cout << "Enter the array:\n";

	for(int row = 0; row < 3; row++){

		for(int col = 0; col < 4; col++){
			cin >> arr[row][col];
		}
	}

	// 2d array => print
	cout << "The 2d array is:\n";
	for(int row = 0; row < 3; row++){

		for(int col = 0; col < 4; col++){
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

  
}