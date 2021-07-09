#include <iostream>
using namespace std;

// decl + def
void printTable(int n, int k){ // n = num, k = num;
   // n = 3, k = 3
   int c = 0;  // 0 1 2 3
   int num = n; // 3  6  9  12
   while(c < k){ // 0<3  1<3  2<3  3 <3
	   cout << num << " ";
	   num += n;
	   c++;

   }
   

   // 3 6 9

}


// n = 5
// 1 *
// 2 **
// 3 ***
// 4 ****
// 5 *****

//decl + def
void printPattern(int n){
	// n => user input
	// 1.....n table

	// 3
	// 1  => 1
	// 2  => 2 4
	// 3  => 3 6 9

   // nested loops
	for(int num = 1; num <= n; num++){
		//table print krna h
		//num => row number
		// num => how many times

		printTable(num, num);
		//loops


		////
		cout << endl;


	}

}

int main(){


	int n;
	cin >> n;

	printPattern(n);




	return 0;
}