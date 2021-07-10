#include <iostream>
using namespace std;

#define LIMIT 10

#define add(x,y) x+y

#define max(x,y)  (x >= y ? x : y)

const int C = 10000;

int main(){

    cout << LIMIT + 20 << endl;


	// LIMIT = 100; // no you can not do this

	cout << LIMIT << endl;

	//macro with arguments
	int sum = add(10, 20);
	cout << sum << endl;

	//ternary operator=>   ?  :

	int val = 6 > 6 ? 1 : 0;

	//   var = (condition) ? (part1) : (part2);
	cout << val << endl;

	int maximum = max(98, 98);
	cout << maximum << endl;


	return 0;

}