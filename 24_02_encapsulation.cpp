#include<iostream>
using namespace std;

int global = 111;

void demo(){
	int local = 222;
	cout << local << " " << global << endl;
}

class Capsule{
	public:
	  string medicine;
	  string color;
	private:
	  int strength;

	public:
	Capsule(string m, string c, int s){
		medicine = m;
		color = c;
		strength = s;
	}

	int get_strength(){
		return strength;
	}

	private:
	  void increase_strength(){
		  strength = strength+1;
	  }
	
	public:
	   void please_increase_strength(){
		   increase_strength();
	   }
};



int main(){

	// demo();

	// int local = 333;
    
	// cout << local << " " << global << endl;

	Capsule cap("Tulsi", "Red", 3);

	cout << cap.get_strength() << endl;

//	cap.increase_strength(); //No
	cap.please_increase_strength(); //YES

	cout << cap.get_strength() << endl;


}
