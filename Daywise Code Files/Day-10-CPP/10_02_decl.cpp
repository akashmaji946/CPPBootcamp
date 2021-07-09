#include <iostream>
using namespace std;

//declaration  => return type + function name + parameters
int square(int x);



// declaration + definition
int square2(int x){
	return x * x;
}

int main(){


	int x;
	cin >> x;
	int value = square2(x);
	cout <<  value << endl;




	return 0;
}

// define
int square(int x){
	return x * x;
}


// status code
// 0 => successful
// 1 => unsucc