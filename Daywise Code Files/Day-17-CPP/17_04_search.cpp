#include <iostream>
using namespace std;

bool search(int arr[], int n, int item){

    // pure array me check krna h
	for(int i = 0; i < n; i++){
		if(arr[i] ==  item){
			return true;
		}
	}

	// yha tak phucha => element (item) nhi mila
	return false;
}

int main(){

	int n;
	cout << "Enter no. of items: ";
	cin >> n;

	int arr[10001];

	int item;
	cout << "Enter search item: ";
	cin >> item;

	// agar code me ek line hai, {} hata skta hoon
	for(int i = 0; i < n; i++) 
	    cin >> arr[i];
    
	//true=> YES   false=>No
	bool found = search(arr, n, item);

	// if(found){

	// }else{

	// }

	(found == 1) ? cout << "YES\n" : cout << "No\n";




	return 0;
}