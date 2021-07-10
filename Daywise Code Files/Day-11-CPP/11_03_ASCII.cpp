#include<iostream>
using namespace std;


int main(){
	//ASCII => har character ko ek value
	// A => 65
	// a => 97
	// 0 => 48

	char ch1 = 'A';
	// 0, 1, 2, 3, .....25 => total 26
	for(int i = 0; i < 26; i++){  //0...25=>26
      cout << ch1 << " => " << (int)ch1 << endl;
	  ch1++;  // B   C    D ...... Z
	}

	char ch2 = 'a';  //26 times
	


	char ch3 = '0';  //10 times


}