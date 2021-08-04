#include <iostream>
using namespace std;

class Box{
	public:
	  int l;
	  int b;
	  int h;
	Box(int x, int y, int z){
		l = x;
		b = y;
		h = z;
	}
	

	public:
	  int get_vol(){
		  return l*b*h;
	  }

	  //prototype
	  int get_area();

	  

};

int Box::get_area(){
		  return 2 * (l * b + b * h + h * l);
}


int main(){
	Box b(10, 21, 31);
	int vol = b.get_vol();
	int sa = b.get_area();
	cout << vol << " " << sa << endl;

	Box b2(11, 22, 32);
	int vol2 = b2.get_vol();
	int sa2 = b2.get_area();
	cout << vol2 << " " << sa2 << endl;

}