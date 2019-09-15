//以公里为单位输入距离 以升为单位输入汽油量 求每100公里耗油量 
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
