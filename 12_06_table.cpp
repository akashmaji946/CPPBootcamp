



// 4

// 1  => 1 
// 2  => 2 4
// 3  => 3 6 9
// 4  =>  4 8 12 20

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int row = 1; row <= n; row++){
		// i = 1 => 1 value
		// i => 2 => 2 values
		int start = row;

		for(int col = 1; col <= row; col++){
			cout << start << " ";
			start += row;  // start = start+i;
		}
		cout << endl;
	}


}

