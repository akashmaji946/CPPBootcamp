#include<iostream>
using namespace  std;
//TASK: input n numbers
// store n numbers => arrays
// print n numbers

// array => function pass => receive as parameter => no size has to be given here
void input_array(int arr[], int n){

	for(int index = 0; index < n; index++){
		cout << "Enter age of person " << index << ": ";
		cin >> arr[index];
	}

}

void print_array(int arr[], int n){

	
	cout << "The members are: \n";
	for(int index = 0; index < n; index++){
		cout << "value at " << index << ": " << arr[index] << endl;
	}

}


int main(){

	int values[100000];

	// int n;
	// cout << "Enter array size: " << endl;
	// cin >> n;

	// // cin >> values[0];
	// // cin >> values[1];
	// // ///

	// // cin >> values[n-1];

	// // ////
   
    // // only name has to be passed
	// input_array(values, n);

	// print_array(values, n);


	int ages[10];
	int m;
	cout << "Enter no. of persons: " << endl;
	cin >> m;


	input_array(ages, m);
	print_array(ages, m);







	return 0;
}