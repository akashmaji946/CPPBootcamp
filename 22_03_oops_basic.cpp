#include <iostream>
using namespace std;

// class definition
class Human{
	//properties => data members
	public:
	string name;
	int age;

	private:
	string color;
	string country;
	double weight;

	// behaviour => members functions
	public:
	void run(){
		cout << " i am running\n";
	}

	int get_age(){
		return age;
	}
};

int main(){
	// Human object
	//type name
	Human nazir;
	nazir.name = "NAZIR";
	nazir.age = 20;

	cout << "name is: " << nazir.name << endl;
	cout << "age is: "  << nazir.get_age() << endl;
	nazir.run();

	return 0;
}