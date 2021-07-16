#include<iostream>
using namespace std;


int main(){

	int n;
	cin >> n;

	int arr[10001];

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	// logic:
	// sump = +ve sum
	// sumn = -ve sum
    // diff = sump - sumn

	// -2 -5 -9 => -16

	int sump = 0;
	int sumn = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] >= 0){
			sump = sump + arr[i];
		}else{
			sumn = sumn + arr[i];
		}
	}

	int diff = sump - sumn;
	cout << "Difference: " << diff << endl;






	return 0;
}