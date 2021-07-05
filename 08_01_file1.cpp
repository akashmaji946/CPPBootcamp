#include <iostream>
using namespace std;
int main() {

	// Without any loop
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";
  std::cout << "Hello World!\n";

  // With FOR loop
  // i => 1 2 3 ... 100
  for(int i =  1; i <= 100; i++){
	  cout << i << " Hello World With LOOP\n";
  }

  // for +> keyword
  // initialization => only 1 time
  // condition => multiple times (kab => after initialization)
  // updation => multiple times (kab => after execution)



  return 0;
}