
#include <iostream>
#include <cmath>
using namespace std;

// 20 => 2 * 2 * 5
// 10 => 2 * 5
// 12 => 2 * 2 * 3

// n => 1.......n
// n => 2.......sqrt(n)

// 12 => 2, 
// 6 => 2
// 3  => 3

int main(){

    int n;
    cin >> n;

    for(int f = 2; f <= (int)sqrt(n); f++){
        if(n%f == 0){
            while(n%f==0){
                cout << f << " ";
                n = n/f;
            }
        }
    }
   cout << n << endl;
   cout << endl;


    return 0;

}