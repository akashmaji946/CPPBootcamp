#include <iostream>
using namespace std;
int main() {

	// n => n ka table

	// n = 8
	// 8 * 1 = 8
	// 8 * 2 = 16
	//
	//
	// 8 * 10 = 80

	int n;
	cout << "Enter number: ";
	cin >> n;

	


	for(int multiply = 1; multiply <= 10; multiply++){
		cout << n << " * " << multiply << " = " << 
		n * multiply << endl;
	}





	



  return 0;
}