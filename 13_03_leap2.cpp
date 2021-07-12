
#include <iostream>
#include <cmath>
using namespace std;

// y % 400 => yes
// y % 100 => no
// y % 4 => yes
// else no

int main(){

    int year;

    do{
        cin >> year;

        if(year == 0) break;

        // leap year
        switch(year % 400 == 0){
            case 1:
                 cout << "Leap\n";
                 break;
            case 0:
                 switch(year % 100 == 0){
                     case 1:
                        cout << "Leap Not\n";
                        break;
                     case 0:
                        switch(year % 4 == 0){
                            case 1:
                              cout << "Leap\n";
                              break;
                            case 0:
                             cout << "Not Leap\n";
                              break;
                        }
                       
                 }

                 

        }
    }while(true);

   


    return 0;

}