#include <iostream>
using namespace std;


// declaration

// syntax:  returntype funcname
// parameters: name, age, ....
void greet(string name, int age){
	cout << "Hello " << name << " CPPBuddy, WELCOME to C++\n";
	cout << "Your age is " << age << endl;


	return;   //void
}

int main() {
  //cout << "Hello World!\n";

  // functions
  // reusbale peice of code
  // define => once
  // call => multiple

  // use => call

  greet("Deepika", 15);   //1
  greet("nazir", 10);   // 2
  greet("Aarchi", 18);    // 3



}