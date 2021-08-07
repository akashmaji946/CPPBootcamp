


// // 1234  => 4

// 123    // count=1
// 12     // count=2
// 1      //count=3
// 0      // count=4     STOP


#include <iostream>
using namespace std;

void counter(int n){
	int count = 0;
	while(n != 0){
		n = n/10;
		count++;
	}
	cout << count << endl;
}

int count = 0;
void counter2(int n){

	if(n==0) return;
	else{  //n>0
	  count++;
      counter2(n/10);

	}

}

int main(){
	int n;
	cin >> n;

	counter2(n);
	cout << count << endl;


	
}