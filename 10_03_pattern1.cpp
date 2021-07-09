#include <iostream>
using namespace std;


// n = 5
// 1 *
// 2 **
// 3 ***
// 4 ****
// 5 *****

//decl + def
void printPattern(int n){
	// n => user input
    
	// n times
	for(int i = 1; i <= n; i++){

		// row i  => i stars
        //this will print ith row
		for(int stars = 1; stars <= i; stars++){
			cout << "*";
			//cout << endl;
		}

		cout << endl;


	}

}

int main(){


	int n;
	cin >> n;

	printPattern(n);
	printPattern(n+1);
	printPattern(n+2);





	return 0;
}