

#include <iostream>
using namespace std;

int main(){

	//area = 0.5 * height * base

	// traingle

	double base;
	double height;
	cin >> base >> height;

	int area = 0.5 * base * height;
	/// 17.5  => int => 17

	double area2 = 0.5 * base * height;
	cout << area << " " << area2<< endl;



	return 0;
}