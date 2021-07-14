#include <iostream>
using namespace std;
int main() {

	// POINTERS => special variables => store adresses

	// pointer to integer
	// & (amperssand) => address
	// 0x7ff......  => adress of a (hexadecimal)
	int a = 10;
	cout << "value of a " <<  a << endl;
	cout << "address of a " << &a << endl;

	// pointer variable
	int* ptr = &a;  // type => int*  => pointer to int
	cout << "value of ptr:" << ptr << endl;
	cout << "address of ptr: " << &ptr << endl;

	// format specifier
	printf("Adress of a: %d\n", &a);


	// pointer => value + adress
	// value => typecast
	// adress => 
	
	


  
}