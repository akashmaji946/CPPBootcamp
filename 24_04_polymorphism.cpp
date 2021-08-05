#include <iostream>
using namespace std;

//function overloading
class Add{

	public:
	   int sum(int a, int b){ //10 19
		   return a+b;
	   }

	   int sum(int a, int b, int c){
		   return a + b + c;
	   }

	   double sum(double a, double b){
		   cout << "Hello\n";
		   return a+b;
	   }

	   string sum(string a, string b){
		   return a+b;
	   }
	   

};

int main(){
	Add a;
	cout << a.sum(10, 20) << endl;
	cout << a.sum(11, 22, 33) << endl;
	cout << a.sum(10.7, 19.8) << endl;

	cout << a.sum(19.4, 20.9) << endl;
	cout << a.sum("AKASH", "MAJI") << endl;


	return 0;
}