#include <iostream>
using namespace std;

int main() {


	// Grade
	// Average  = (total marks) / no of subjects
	// marks  => 5 subjects

	int phy, chem, bio, maths, comp;

	// input 5 subjects
	cout << "Enter 5 subjects marks: ";
	cin >> phy >> chem >> bio >> maths >> comp;

	int total = phy + chem + bio + maths + comp;
	double average = total / 5;

	cout << "Your average: " << average << endl;


	if(average >= 90){
		cout << "A grade" << endl;
	}else if(average >= 80){
       cout << "B grade" << endl;
	}else if(average >= 70){
       cout << "C grade" << endl;
	}else if(average >= 60){
      cout << "D grade" << endl;
	}else if(average >= 40){
      cout << "E grade" << endl;
	}else{
		cout << "fail" << endl;
	}


   // else if ladder => we can have many else if

   cout << "Thank You :)\n";







  return 0;
}