

// f(5) = 1*2*3*4*5 = 120

// f(6) = 6 * f(5) = 6 * 120 = 720

// 0! = 1
// n! = n * (n-1)!

// f(n) = 1  (when n==0)
// f(n)  = n * f(n-1)

#include <iostream>
using namespace std;

int f(int n){

	if(n == 0){
	
		return 1;

	}else{
		
		return n * f(n-1);
	}
	
}

int main(){
	cout << f(5) << endl;
	cout << f(6) << endl;
	return 0;
}