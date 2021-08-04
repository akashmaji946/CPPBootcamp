#include <iostream>
using namespace std;

void demo(){
	// normal variable
	int x = 0;      // multiple times

	// static var
	static int y = 0; //only once

	// print the two
	cout << x << "====" << y << endl;

	//increment
	x++;
	y++;
}


int main() {

	for(int i = 0; i < 10; i++){
		demo();
	}

	
  
}