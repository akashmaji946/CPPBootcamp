

#include <iostream>
using namespace std;

int main(){

	// perimeter
	// length breadth
	// p = 2 * (l + b)

	int l;
	int b;
    
	cout << "Enter length and breadth: ";
	cin >> l >> b;

	int peri = 2 * (l + b); // expression
	cout << "perimeter: ";
	cout << peri << endl;


	return 0;
}