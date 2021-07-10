#include<iostream>
using namespace std;


int main(){
	//ASCII => har character ko ek value
	// A => 65
	// a => 97
	// 0 => 48

	char ch;
	cout << "Enter a character: ";
	cin >> ch;

	//digit
	// 0-9 => 48-57
	if(ch >= 48 && ch <= 57){
		cout << ch << " is a digit\n";
	}


	//alphabet
	// A-Z => 65-90
	// a-z => 97-122
	else if(ch >= 65 && ch <= 90){
		cout << ch << " is capital letter\n";
	}
	else if(ch >= 97 && ch <= 122){
		cout << ch << " is small lettter\n";
	}

	//otherwise
	else{
		cout << ch << " is special letter\n";
	}

	

}