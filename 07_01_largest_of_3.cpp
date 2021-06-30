#include <iostream>
using namespace std;

int main() {

	// 2 numbers => relation 
	// 12 17  => 12 < 17
	// 13 10  => 13 > 10
	// 100 100 => 100 == 100

	// Why == ?
	// =   => assignment

	int num1, num2;
	cin >> num1 >> num2;

	if(num1 < num2){
		cout << num1 << " < " << num2 << endl;
	}else if(num1 > num2){
		cout << num1 << " > " << num2 << endl;
	}else{
		cout << num1 << " == " << num2 << endl;
	}







  return 0;
}