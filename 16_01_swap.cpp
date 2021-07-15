#include <iostream>
using namespace std;


// SWAP two numbers
// x=10  y=20
// x--->y   y--->x
// x=20  y=10

int main() {

	int x, y;
	cout << "Enter x and y: " << endl;
	cin >> x >> y;
    
	// Before Swapping
	cout << "X: " << x << endl << "Y: " << y << endl;

	// Logic
	// temporary var

	int temp = x;   // x can be used
	x = y;          // y can be used
	y = temp;

	// After swapping
	cout << "X: " << x << endl << "Y: " << y << endl;


  






  return 0;
}