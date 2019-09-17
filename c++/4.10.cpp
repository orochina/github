// strtype4.cpp -- line input
#include <iostream>
#include <string>                // make string class available
#include <cstring>               //C-style string library
int main()
{
	using namespace std;
	char charr[20];
	string str;
	
	cout << "Length of string in charr before input: "
	     << strlen(charr) << endl ;
	cout << "length of string in str before input: "
	     << str.size() << endl;
	cout << "Enter a line of text:\n"";
	cin.get(charr,20);                    //indicate maximum length
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	get(cin,str);                         // cin now argument; no length specifier
	cout << "You enter: " <<¡¡ 
}
