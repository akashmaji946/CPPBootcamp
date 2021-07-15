#include <iostream>

using namespace std;

void input_array(int arr[], int n){
	for(int index = 0; index < n; index++){
		cout << "Enter value at " << index << ": ";
		cin >> arr[index];
	}
}

void print_avg(int arr[], int n){

	// avg = sum / total no. of elements

	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum + arr[i];
	}

	// sum contains the total sum of all elements
	double avg = sum / n;
	cout << "Your average: " << avg << endl;

}

void print_prod(int arr[], int n){
	int prod = 1;
	for(int i = 0; i < n; i++){
		prod = prod * arr[i];
	}

	// 1 2 3 4
	// prod = 1
	//        1
	//        2
	//        6
	//        24       

	// prod contains the total product of all elements
	cout << "Your product : " << prod << endl;

}


int main(){

	// Arrays:
	// collection of similar data items
	// size => fixed

	int values[1000];

	int n;
	cout << "Please enter the no. of values " << endl;
	cin >> n;

	input_array(values, n);
	print_avg(values, n);
	print_prod(values, n);


	












	return 0;
}