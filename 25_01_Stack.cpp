#include <iostream>
using namespace std;

// Stack Class

// => data members  (top)
// => member functions (push(), pop(), peek())

// push(7) => insertion => insert 7 at the top
// top changes, size is increented

// pop() => deletion => delete what is at the top
// top changes, size is decreased

// peek() => see => what is present at top
// top does not change, size is not changed

// {}    empty stack   size = 0
// push(7)  =>   {7}     top=7   size=1   tp = 1
// push(8)  => {7, 8}    top = 8  size=2  tp = 2
// push(2)  => {7, 8, 2, _}  top= 2   size=3  tp = 3
// pop()    => {7, 8, _}   top=8   size=2   tp=2
// peek()   => {7, 8}   ans = 8   size=2


class Stack{
	// data members
	public:
	   int top;  // top mein kya hai
	   int capacity;  // maximum limit
	   int* arr;   // this will store all the elements
	   int top_ptr;
	
	Stack(int max_size){
		capacity = max_size;
		top = -1;
		arr = new int[capacity];  // DMA
		top_ptr = 0;




	}
	
	// member functions
	public:
	 void push(int item){

		 if(top_ptr == capacity){
			 cout << "STACK FULL\n";
			 return;
		 }
		    

		 arr[top_ptr]  = item;
		 top = item;
		 top_ptr++;


	 }

	 void pop(){

		 if(top_ptr == 0){
			 cout << "STACK EMPTY\n";
			 return;

		 }

		 int item = arr[top_ptr-1];
		 top_ptr--;

		 top = arr[top_ptr-1];


	 }

	 int peek(){
		 return top;
	 }

	 int size(){
		 return top_ptr;
	 }




	  


};



int main() {

	Stack s(3);
	s.push(7);
	s.push(8);
	cout << s.size() << endl;  //2
	s.push(9);
	s.pop();
	cout << s.size() << endl;  //2
	s.pop();
	cout << s.size() << endl;  //1
	cout << s.peek() << endl;  //7

	s.push(10);
	cout << s.size() << endl;  //2
	cout << s.peek() << endl;  //10

	s.push(10);
	s.push(11);   // mssg





  
}