#include <iostream>
using namespace std;



// 34 => 34 * 0.5 = 17 
// 45 => 45 * 0.5 => 22.5
// 56 => 50 * 0.5 + 6 * 0.75
// 100 => 50 * 0.5 + 50 * 0.75
// 165 => 50 * 0.5 + 100 * 0.75 + 15 * 1.20
// 270 => 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + 20 * 1.5

// 180 => 50 * 0.5 + 100 * 0.75 + 30 * 1.20
// 300 => 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + 50 * 1.5

int main() {

	int units;
	cin >> units;

	double amount = 0;

	if(units <= 50){
		amount = units * 0.5;
	}else if(units <= 150){
		//50 + remaining
		amount = 50 * 0.5 + (units-50) * 0.75;
	}else if(units <= 250){
		// 50 + 100 + remaining
		amount = 50 * 0.5 + 100 * 0.75 + (units - 150) * 1.2;
	}else{
		//50 + 100 + 100 + remaining
		amount = 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
	}

	cout << "Total Amount: " << amount << endl;

	double tax = 0.2 * amount;  // 20 percent = 20/100 = 0.2

	cout << "Total Bill: " << amount + tax << endl;


 





}