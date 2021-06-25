
#include <iostream>
using namespace std;


int main(){

	// * + - /
	int v = (2 + 7) * 7;
	cout<< v << endl;

	// 
	v = 2 + 7 * 7;
	cout << v << endl;

	v = 7 * 5 / (5 + 5) * 5;// * /     +

	    //  35  / 10 * 5
		//  3 * 5
     


	cout << v << endl;

	// ()
	// % * /  
	// + -
	

	v = 10 % 3 + 7 * 6 + 6 / 3 % 2;
	    //   1    + 42  + 0
		//   43
	cout << v << endl;

	return 0;
}