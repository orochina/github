//编写一个程序 输入年龄 包含多少月
#include <iostream>
using namespace std;
int month(int);      // 函数原型 
int main()
{
	cout << "Enter your age: ";
	int age; 
	cin >> age;           //输入  
	cout << age << endl;
	int months = month(age);
	cout << "Your have passed " << months << " month ";
	return 0;
 } 
 int month(int age)    // 定义新函数 
 {
 	return 12 * age; 
 }
