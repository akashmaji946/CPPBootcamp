#include <iostream>
using namespace std;

int main(){

	// c++ style strings

	// string class

	string str;
	//str => string object

	// cin >> str;
	getline(cin, str);
	cout << str << endl;

	cout << str.size() << endl;

	str = str + ", Hello How are you";
	cout << str << endl;

	cout << str.size() << endl;

	str = str + " See you soon" + " BYE BYE";

	for(int i = 0; i < str.size(); i++){
		cout << str[i] << "";
	}
	cout << endl;




	return 0;
}