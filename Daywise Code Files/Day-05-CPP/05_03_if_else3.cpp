
#include<iostream>
using namespace std;

signed main(void){

    int age;
    int id;

    //userinput

    cout << "Enter your age: ";
    scanf("%d", &age);

    cout << "You have voter ID card: (1/0):";
    scanf("%d", &id);


    //output
    //printf("The number is: %d", var);
    
    // id  = non-zero => true  1, 2 3, -9, -123, =====> true
    // id = 0  => false
    // 
    if(age >= 18  && id){   //  id = 1 = true   ==> hoga   ;   id = 0 = false => nhi hoga
        cout << "You can vote";
    }else{
        cout << "Go and sleep";
    }






    return 0;
}