#include <iostream>
using namespace std;

#define maxval2(x,y,z) ((x >= y && x >= z)?(x):(y >= z && y >= x) ? (y) : (z))

inline int maxval(int x, int y, int z){
	return (x >= y && x >= z)?(x):(y >= z && y >= x) ? (y) : (z);
}

int main(){

	int x, y, z;
	cin >> x >> y >> z;

	// NOTE: do not use if else
	// USE: ternary operators
	//  int x = (5 > 6) ? (7) : (9);


	// x maximum => (x >= y && x >= z)

	int maxnum = (x >= y && x >= z)?(x):(y >= z && y >= x) ? (y) : (z);

   cout << "Max: " << maxnum << endl;

   cout << "Max val2:" << maxval2(10, 9, 15) << endl;




	return 0;
}