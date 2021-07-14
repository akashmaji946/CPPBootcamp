#include <iostream>
using namespace  std;


signed main(void){

	// indiection => dereferencing => indirect access
	int var = 100;

	//direct access(variable name)
	cout << var << endl;

	//indirect acccess (pointers)
	int* ptr_var = &var;
	cout << ptr_var << endl;
	cout << *ptr_var << endl;

	int a = 1000;

	int* ptr_a = &a;
	*ptr_a = *ptr_a - 1000;

	cout << a << endl;

	(*ptr_a)++;
	cout << *ptr_a << endl;




	return 0;
}