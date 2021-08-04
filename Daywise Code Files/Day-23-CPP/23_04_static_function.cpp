#include <iostream>
using namespace std;

class Animal{
	//data memebrs
	public:
	string name;
	int age;

	static string type; //= "ANIMAL";

	public:
	void eat(){
		cout << name << " is eating\n";
	}

	static void sleep(){
		cout << type << " is sleeping\n";
	}

};

string Animal::type = "ANIMAL";


int main(){
	Animal dog;
	dog.name = "TOM";
	dog.eat();
	dog.sleep(); //Animal

	Animal::type = "DOGGIE";

	Animal::sleep(); //Doggie

	Animal cat;
	cat.name = "CAT";

	cat.eat(); // cat is eating
	Animal::type = "CATTIE";
	cat.sleep(); // Cattie

	Animal::sleep();  // cattie





	
	return 0;
}