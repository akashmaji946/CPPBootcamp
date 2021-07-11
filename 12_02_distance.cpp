#include <iostream>
#include <cmath>
using namespace std;

//   ./a.out
//   g++ distance.cpp -o distance

int main(){
	// Distance between 2 points
	int x1, y1;
	cout << "Enter the cordinates of P: ";
	cin >> x1 >> y1;

	int x2, y2;
	cout << "Enter the cordinates of Q: ";
	cin >> x2 >> y2;

	double dist;

	// sqrt((x2-x1)^2 + (y2-y1)^2)

	// pow((x2-x1), 2) => (x2-x1)^2

	dist = sqrt(
           pow((x2-x1), 2) + pow((y2-y1), 2)
	);

	cout << "Distance between P and Q is " << dist << endl;





	return 0;
}