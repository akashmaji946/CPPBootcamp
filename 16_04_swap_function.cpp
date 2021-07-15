#include <iostream>
using namespace std;

// function => x, y adrr => values swap

void swap_values(int* x, int* y){
	int temp = *x;   
	*x = *y;
	*y = temp;
}

int main(){

	int x, y;
	cin >> x >> y;



	cout << x << " " << y << endl;

   swap_values(&x, &y);

   cout << x << " " << y << endl;

   // i can  call thiss multiple times
   //
   //
   //

	return 0;
}