#include <iostream>
using namespace std;
int main(){
	int a = 10;
	int b = 20;

	int& ref_a = a;
	cout << a << " " << ref_a << endl; // 10 10

	swap(a, b);
	cout << a << " " << ref_a << endl; // 20 20
}