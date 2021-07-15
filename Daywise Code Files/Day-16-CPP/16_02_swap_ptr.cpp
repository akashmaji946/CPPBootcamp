#include <iostream>
using namespace std;


int main(){

	// SWAP:
	// x=1  y=2
	// x=2  y=1


	int x, y;
	cout << "Enter x and y " << endl;
	cin >> x >> y;

	//WITH pointers

	int* x_ptr = &x;
	int* y_ptr = &y;

	// Before swap
	cout << "X: " << x << endl << "Y: " << y << endl;

	// temporary var
	int temp = *x_ptr;   // x freed
	*x_ptr = *y_ptr;
	*y_ptr = temp;

	// After swap
	cout << "X: " << x << endl << "Y: " << y << endl;











	return 0;
}