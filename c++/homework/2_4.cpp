//��дһ������ �������� ����������
#include <iostream>
using namespace std;
int month(int);      // ����ԭ�� 
int main()
{
	cout << "Enter your age: ";
	int age; 
	cin >> age;           //����  
	cout << age << endl;
	int months = month(age);
	cout << "Your have passed " << months << " month ";
	return 0;
 } 
 int month(int age)    // �����º��� 
 {
 	return 12 * age; 
 }
