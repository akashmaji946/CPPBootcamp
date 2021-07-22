

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(){

}


int main(){

	// C-style string => character arrays
	// null terminate string

	char arr[10];   // 10 characters

	arr[0] = 'A';
	arr[1] = 'K';
	arr[2] = 'A';
	arr[3] = 'S';
	arr[4] = 'H';
	arr[5] = '\0';

   cout << arr << endl;

   char name[20] = "AKASH MAJI";
   cout << name << endl;
   printf("%s\n", name);   //


   // "nazir hussain"
   char stud[20];
   //cin >> stud;  // stud = "nazir husain"
   cin.get(stud, 20);
   cout << stud << endl;
   printf("%s\n", stud);


   // 

   char myname[10] = {'A', 'K', 'A', 'S', '\0'};
   cout << myname << endl;
   cout << endl;

	return 0;
}