
#include <iostream>
using namespace std;

int main(){

	// maximum of 3

	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	if(num1 >= num2 && num1 >= num3){
		cout << num1 << " is largest";
	}else if(num2 >= num1 && num2 >= num3){
		cout << num2 << " is largest";
	}else{
		cout << num3 << " is largest";
	}

	cout << endl;

	return 0;
}