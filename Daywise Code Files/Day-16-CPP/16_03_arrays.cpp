#include <iostream>

using namespace std;


int main(){

	// Arrays:
	// collection of similar data items
	// size => fixed

	// Declare => type + name + size

	int ages[10];

	// initialize
	ages[0] = 12;
	ages[1] = 13;
	////
	ages[9] = 19;
    
	// access
	cout << ages[8] << endl;



	// Declare + Initialization

	double values[4] = {12.12, 13.13, 14.14, 21.21};

	// index  => 0, 1......(n-1)
	// changing array member
	values[0] = 12.24;
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	cout << values[3] << endl;

	// what happens when I access outside members?
	// 0.....(n-1)
	// garbage 

	cout << values[100] << endl;
	cout << values[-67] << endl;

	












	return 0;
}