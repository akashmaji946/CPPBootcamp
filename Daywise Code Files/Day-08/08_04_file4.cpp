
#include <iostream>
using namespace std;

int main(){
	// n => user input
	int n;
	cin >> n;

	// n = 15
	// even => 2 4 6 8 .... 14
	// odd => 1 3  5   .... 15

   // print even numbers till n
	for(int even = 2; even <= n; even = even + 2){
		cout << even << " is even" << endl;

	}

	cout << endl;

	
	// print odd numbers till n
	for(int odd = 1; odd <= n; odd = odd + 2){
		cout << odd << " is odd" << endl;

	}



	

	return 0;
}