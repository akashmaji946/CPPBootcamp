#include <iostream>
using namespace std;

class Animal{
	public:
	  int age;
	  string color;
	  string type;

	Animal(){

	}

	Animal(int a, string c, string t){
		age = a;
		color = c;
		type = t;
	}

	public:
	   void play(){
		   cout << "I am animal playing\n";
	   }
    private:
	   void sleep(){
		   cout << "I am not owl, so I sleep\n";
	   }


};

class Dog: public Animal{

	public:
	  void bark(){
		  cout << "I am barking\n";
	  }

	
};

int main(){

	Animal a;
	a.play();
	//a.sleep(); //No
	//a.bark(); //NO

	Dog d;
	//d.sleep(); //No
	d.play();

	d.bark();

}