#include<iostream>
using namespace  std;
//TASK: input n numbers
// store n numbers => arrays
// print n numbers


int main(){

	int values[100000];

	int n;
	cout << "Enter n: " << endl;
	cin >> n;

	// cin >> values[0];
	// cin >> values[1];
	// ///

	// cin >> values[n-1];

	// ////

	for(int index = 0; index < n; index++){
		cout << "Enter number " << index << ": ";
		cin >> values[index];
	}

	cout << "The members are: \n";
	for(int index = 0; index < n; index++){
		cout << "value at " << index << ": " << values[index] << endl;
	}






	return 0;
}