#include <iostream>
using namespace std;

// class define
class A{
	//data members + member functions


	private:
	  int x;
	public:
	  int y;
	protected:
	  int z;



};

int main(){
	// object
	A a;
	a.x;  //no
	a.y;  //yes
	a.z;  //no
	return 0;
}