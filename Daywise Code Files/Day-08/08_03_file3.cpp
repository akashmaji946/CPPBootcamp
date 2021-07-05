
#include <iostream>
using namespace std;

int main(){
	// n => user input
	int n;
	cin >> n;

	// n = 15
	// 1  2   3  4  5 ...... 15

	for(int i = 1; i <= n; i++){

		if(i % 2 == 0){
			cout << i << " is even" << endl;
		}else{
			cout << i << " is odd" << endl;
		}

	}

	return 0;
}