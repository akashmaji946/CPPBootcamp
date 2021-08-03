#include <iostream>
using namespace std;

class Employee{
	//properties
	public:
	 string name;
	 int age;
	 double salary;
	 int empid;

	 // constructor => only name, no return type

	 // default constructor
	  Employee(){
		  name = "EMP";
		  age = 20;
		  salary = 350000;
		  empid = 1010;

	  }

	  // parameterized constructor
	  Employee(string name, int age){
		  this->name = name;
		  this->age = age;

		  salary = 400000;
		  empid = 1020;



	  }

	
	//functions
	void work(){
		cout << "My name is " << name << " and I am working\n";
	}

	void sleep(){
		cout << "My salary is " << salary << " yet I am sleeping\n";
	}

	//destructor
	~Employee(){
       cout << "Employee with name " << name << " is destroyed\n";
	}

};

int main(){
	Employee e1;  //default 
	e1.work();
	e1.sleep();
	cout << e1.age << endl; //20

	Employee e2("Akash", 30);  //para
	e2.work();
	e2.sleep();
	cout << e2.age << endl; //30
}