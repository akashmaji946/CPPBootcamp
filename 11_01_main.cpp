#include <iostream>
using namespace std;

int add(int x, int y){
	return x + y;
}
// STACK FRAME => memory + CPU has to work
// mera time jata hai

// just use keyword inline before fn datatype
inline int sub(int x, int y){
	return x - y;
}



int main() {


	//inline functions


    // normal functions
	int sum = add(10, 29);
	cout << sum << endl;

	int diff = sub(12, 9);
	cout << diff << endl;



      return 0;
}