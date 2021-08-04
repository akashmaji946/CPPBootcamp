

#include <iostream>
using namespace std;


class Animal{

	//static data member
	public:
	static int count; //;

	//data memberrs
	public:
	  string name;
	  string type;
	  int age;
	  double weight;
	  string color;

	public:
	  Animal(){
		  count++;
	  }

	// member functions
	public:
	  void play(){
		  cout << name << " is playing\n";
	  }


};

 int Animal::count = 0; //initialised

int main(){
	Animal dog;
	Animal cat;

	cout << Animal::count << endl; //2

	Animal horse;
	Animal bird;

	dog.name = "TOMMY";
	cat.name = "CATTY";

		cout << Animal::count << endl; //4

	cat.play();
	dog.play();

}