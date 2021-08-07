

// // n = 4
// sum = 1 + 2 + 3 + 4

// // n=1
// sum = 1

//  // f(1) = 1         //BASE CASE
// // f(4) = 4 + f(3)    // RECURSIVE CASE 


#include <iostream>
using namespace std;

int f(int n){
  
  //base case
  if(n == 1) {
	  int ans = 1;
	  return ans;

  }
  // recursive case
  else{  // n>1
    
	int ans = n + f(n-1);
	return ans;

  }


}

int f2(int n){
	return n * (n+1) / 2;
}


int main(){

	cout << f(10) << " " << f2(10) << endl;

}