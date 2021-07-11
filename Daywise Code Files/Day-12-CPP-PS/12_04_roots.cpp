#include <iostream>
#include <cmath>
using namespace std;


int main(){

	// a, b, c => coefficients

	int a, b, c;
	cout << "Enter the coefficients:";
	cin >> a >> b >> c;

	int disc = b * b - 4 * a * c;
    cout << "Disc: " << disc << endl;
	
	if(disc >= 0){
		// tabhi muje roots milenge
		double root1 = (-b + sqrt(disc)) / (2 * a);
		double root2 = (-b - sqrt(disc)) / (2 * a);
		cout << "Root1: " << root1 << " \n" << "Root2: " << root2 << endl;
	}else{
		cout << "Roots are not real\n";
	}




	return 0;
}