#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}


// BUILD PROCESS => C++
// the process of converting C++ code into executable code through multiple phases


// compile

// g++ main.cpp    => a.out (machine code)

// pre-processing
// source code => expanded sc

// g++ -E main.cpp

// code => assembly code
 // g++ -S main.cpp   => main.s (assembly code)

 // code => object code
 // g++ -c main.cpp => main.o (object code)