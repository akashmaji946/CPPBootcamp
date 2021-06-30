#include <iostream>
using namespace std;

int main(){

	// leap year
	// 2 conditions => any one true => leap year
	// 400 
	// 4 and 100  nhi

    int year;
	cin >> year;
	if(year % 400 == 0 or (year % 100 != 0 and year % 4 == 0)){
		cout << "Year is LEAP\n";
	}else{
		cout << "Year is not leap\n";
	}



	return 0;
}