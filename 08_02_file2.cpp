
#include <iostream>
using namespace std;

int main(){


	// input
	int num;
	cout << "Enter a limit: ";
	cin >> num;


	// 1 2 3 .... num

	// we will use for loop
	for(int i = 1; i <= num; i++){
		cout << i << " ascending "<< endl;
	}

	// 10  9   8 ...  1

	// num, num-1, num-2, ..... 3   2   1
	for(int i = num; i >= 1; i--){
		cout << i << " descending\n";
	}





}