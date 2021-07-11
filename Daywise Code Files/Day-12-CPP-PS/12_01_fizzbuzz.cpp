#include <iostream>
using namespace std;

//   ./a.out
//   ./fizzbuzz

int main(){

	//FIZZBUZZ
	// N=> user input
	// 1.....N
	// 3 multiples => FIZZ
	// 5 multiples => BUZZ
	// 15 => 3, 5 => FIZZBUZZ
	// others => numbers

	int n;
	cout << "Enter n:";
	cin >> n;

	for(int i = 1; i <= n; i++){
		if(i % 3 == 0 && i % 5 == 0){
			cout << "FIZZBUZZ" << endl;
		}else if(i % 5 == 0){
			cout << "BUZZ" << endl;
		}else if(i % 3 == 0){
			cout << "FIZZ" << endl;
		}else{
			cout << i << endl;
		}

	}




	return 0;
}