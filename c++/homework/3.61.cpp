//�Թ���Ϊ��λ������� ����Ϊ��λ���������� ��ÿ100��������� 
#include <iostream>
using namespace std ;
int main()
{
	double kiloMeters ;
	double Liters ;
	cout << "Enter how many miles you have driven: ";
	cin >> kiloMeters ;
	cout << "Enter how much oil you have used: " ;
	cin >> Liters ;
	double oil_consumption ;
	oil_consumption = Liters / kiloMeters * 100 ;
    cout << "Your oil consumption is " << oil_consumption ;
    return 0 ;
 } 
