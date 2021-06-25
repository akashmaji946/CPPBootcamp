
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	// iomanip => input output manipulator
	// endl
	cout << "Hello World" << endl;

	
    int z = 100;
	// setbase(2)=> 1010
	cout <<  setbase(2) << z << endl;

	// setw() => width
	double d = 123.456;
	cout << setw(10) << d << endl;
	// d => 7 characters
	// w = 10 characters
	// spaces => 3 spaces


	// setprecision(v) => v decimal places
	float f = 12.789;
	// %f => 6 places
	cout << setprecision(2) << f << endl;
	cout << setprecision(3) << f << endl;
	cout << fixed;


 return 0;
}