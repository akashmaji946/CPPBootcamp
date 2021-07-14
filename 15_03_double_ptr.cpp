

// int var = 100;

// var: (int)
// val = 100
// add = 1024

// int* ptr_var = &var; (int*)

// ptr_var (pointer variable)  (int*)
// val = 1024
// add = 2024

// int**  ptr_ptr_var = &ptr_var;

// ptr_ptr_var (double pointer variable) (int**)
// val = 2024
// add = 3034

#include <iostream>
using namespace std;

int main(){
   
    // normal variable
	int var = 100;
	// type = int
	// value = 100
	cout << var << endl;
	// addr = X
	cout << &var << endl;

	// pointer variable
	int* ptr_var = &var;
	// type = int*
	// value = X
	cout << ptr_var << endl;
	// addr = Y
	cout << &ptr_var << endl;

	// double pointer variable
	int** ptr_ptr_var = &ptr_var;
	// type = int**
	// value = Y
	cout << ptr_ptr_var << endl;
	// addr = Z
	cout << &ptr_ptr_var << endl;






	return 0;
}


