#include<iostream>
using namespace std;


int main(){
	//ASCII => har character ko ek value
	// A => 65
	// a => 97
	// 0 => 48

	char ch;
	int n;
	cout << "Enter n: ";
	cin >> n;

	char max_ch = '\0'; //0

	for(int i = 0; i < n; i++){
		cout << "Enter a character: ";
	    cin >> ch;

		if(ch >= max_ch){
			max_ch = ch;
		}

	}

	cout << "Maximum ASCII Value character: " << max_ch << endl;
	

	

}