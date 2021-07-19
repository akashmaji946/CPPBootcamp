// m, n = 4
//  6 7 9 2
//  1 2 3 4
//  2 3 2 1
//  8 6 4 3
// ans = 6 * 2 * 2 * 3 = main diagonal

// UT
// 7 9 2
//   3 4
//     1
// i < j


// LT
// 1
// 2 3
// 8 6 4
// i > j

// i == j => diaginal elements

#include <iostream>
using namespace std;
// compulsorily: atleast col dimension
void input_array(int arr[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
}

// print: 
void print_array(int arr[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){

	int arr[10][10];
	int m, n;
	cin >> m >> n;
	input_array(arr, m, m);
	cout << endl;
	print_array(arr, m, n);

	int sum_ut = 0;
	int sum_lt = 0;

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i < j){
				sum_ut = sum_ut + arr[i][j];
			}else if(i > j){
				sum_lt = sum_lt + arr[i][j];
			}
		}
	}

	cout << "SUM UT: " << sum_ut << endl;
	cout << "SUM LT: " << sum_lt << endl;
	

	return 0;
}

