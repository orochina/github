//����ŷ�޷����������ٹ������������ ת��Ϊ��ʽ���Ӣ��ÿ���أ�
#include <iostream>
using namespace std ;
int main()
{
	cout << "Enter the oil consumption in European style: ";
	double eur_style ;
	cin >> eur_style ;
	double us_styple ;
	const double mile = 62.14 ;
	const double liter = 3.875 ;
	int us_style ;
	us_style =(int) 1 / eur_style * liter * mile ;
	cout <<"The oil consumption in U.S. styple is: " << us_style ;
	return 0 ;
 } 
