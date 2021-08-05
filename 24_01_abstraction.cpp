#include <iostream>
using namespace std;

class ATM{
	public:
	  int id;
	  string location;
	  bool running;

	private:
	  double amount;
	
	public:

	ATM(int i, string l, double a){
		id = i;
		location = l;
		amount = a;
		running = true;
	}


    // accessor
	double get_amount(){
		return amount;
	}

	// mutator
	void set_amount(double a){
       amount = a;
	}

	void show_status(){
		if(running == true)
		   cout << "I am working\n";
		else
		   cout << "I am under maintenance\n";

	}


};

int main() {

	ATM sbi(121, "Delhi", 12000);
	sbi.show_status();  //OK
	///
	///
	///
	sbi.running = false;  //YES
	//sbi.amount = 20000; //NO
	//cout << sbi.amount << endl; //NO

	double amt = sbi.get_amount(); //YES
	cout << amt << endl;  //12000
	sbi.show_status();   //NOT OK

	sbi.set_amount(20000);
	amt = sbi.get_amount();
	cout << amt << endl;   //20000
	sbi.show_status();  //NOT OK
	sbi.running = true;
	sbi.show_status();  //OK





  
}