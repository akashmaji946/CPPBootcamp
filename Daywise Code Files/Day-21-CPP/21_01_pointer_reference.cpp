#include <iostream>
using namespace std;


int main() {

	int a = 10;

    // pointer
	int* ptr_a = &a;
	cout << &a << endl;
	cout << ptr_a << endl;

	cout << a << endl;
	cout << *ptr_a << endl;

	// reference
	a++;
	int& ref_a = a;

	cout << a << endl;
	cout << ref_a << endl;

	// ref_a   ====> a

	ref_a = ref_a + 10;
	cout << ref_a << endl;

	cout << a << endl;


	int b = 20;

	ptr_a = &b;
	cout << ptr_a << endl;
	cout << &b << endl;

	ptr_a = NULL;


	// lekin reference me nhi ho skta
	ref_a = b;
	//ref_a = NULL;
   
    // reference ko always initialize

	int c = 30;
	// int& ref_c;
	// ref_c = c;

	int* ptr_c;
	ptr_c = &c;






  
}