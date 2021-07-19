

// 2 3 4 1 3 2 4 => 1
// 0 8 7 8 0 9 0 0 7 8 => 9

// XOR => a ^ b

// properties:
//  7 ^ 0 = 7   => a ^ 0 = a
//  7 ^ 7 = 0   => a ^ a = 0

// 1 2 1 = 1 ^ 2 ^ 1 = 2

// 1 2 3

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	cout << "Enter elements:\n";
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		ans = ans ^ temp;
	}
	cout << "The uniq element is: " << ans << endl;
}