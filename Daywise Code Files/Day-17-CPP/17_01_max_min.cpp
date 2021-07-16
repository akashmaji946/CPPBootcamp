#include <iostream>
using namespace std;

// smallest & largest number
// n = 6
// 12 25 16 23 19 10
// maxn = 25
// minn = 10

int main() {

	int n;
	cout << "Enter n:" << endl;
	cin >> n;

	int arr[100001];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	int maxn = arr[0];
	int minn = arr[0];

	for(int i = 1; i < n; i++){
		if(arr[i] > maxn){
			maxn = arr[i];
		}
		if(arr[i] < minn){
			minn = arr[i];
		}
	}

	cout << "Max: " << maxn << endl;
	cout << "Min: " << minn << endl;
 



 return 0;
}