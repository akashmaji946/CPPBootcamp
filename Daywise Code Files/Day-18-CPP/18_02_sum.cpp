#include <iostream>
using namespace std;


int main() {

	int arr[100][100];

	// 2d array => input
	cout << "Enter rows and cols:";
	int m, n;
	cin >> m >> n;

	int sum = 0;
	
	cout << "Enter the array:\n";

	for(int row = 0; row < m; row++){

		for(int col = 0; col < n; col++){
			cin >> arr[row][col];
			sum = sum + arr[row][col];
		}
	}

	

	// for(int row = 0; row < m; row++){

	// 	for(int col = 0; col < n; col++){

	// 		sum = sum + arr[row][col];
			
	// 	}
		
	// }

	cout << "The sum is:" << sum << endl;

  
}