
#include <iostream>
#include <cmath>
using namespace std;

int fac(int n){
	//calulate factorial of n
	// n= 5
	// f = 5 * 4 * 3 * 2 * 1

	int f = 1;
	for(int i = 1; i <= n; i++){
		f = f * i;
	}
	return f;
}

int main(){
    int n;
    cin >> n;
   cout << "The factorial of " << n << " is: " << fac(n);
   cout << endl;


    return 0;

}