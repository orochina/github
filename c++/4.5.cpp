// instr1.cpp -- reading more than one string
//cin 使用空白（空格、制表符、换行符）来确定字符串的结束 
#include <iostream>
int main()
{
	using namespace std;
	const int Arsize = 20;
	char name [Arsize];
	char dessert [Arsize];
	
	cout << "Enter your name:\n";
	cin.get( name , Arsize ).get() ;           // reads string newline
	cout << "Enter your favorite dessert :\n";
	cin.get( dessert,Arsize).get() ;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
 } 
