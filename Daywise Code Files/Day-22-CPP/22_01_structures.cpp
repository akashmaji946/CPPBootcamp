#include <iostream>
using namespace std;

// let us define a structure
// Person

struct Person{
	// memvbers

	int age;
	string name;
	double salary;
};

int main() {
  cout << "Hello World!\n";

  // let us create structure variable
  Person nazir;
  Person dipika;

  nazir.name = "NAZIR";
  nazir.age = 18;

  cout << nazir.name << " " << nazir.age << endl;

   dipika.name = "DEEPIKA";
  dipika.age = 17;

  cout << dipika.name << " " << dipika.age << endl;

  // an array of structure variables
  Person student[10];
  student[0].name = "ABC";
  student[1].name = "DEF";
  student[9].name = "XYZ";

  for(int i = 0; i < 10; i++){
	  cout << "Student No. " << i+1 <<" "  << student[i].name << endl;
  }

  int arr[10];

  return 0;
}