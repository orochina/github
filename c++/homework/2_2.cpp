// ����һ����longΪ��λ�ľ��� Ȼ��ת��Ϊ��

#include <iostream>
using namespace std;

int dis_long;
int dis_yard;
int main()
{
	cout << "Set a distance in long units: " << endl;	
	cin >> dis_long;
	dis_yard = dis_long * 220 ;
	cout << "It's a diastance in yd code units: " << dis_yard << endl;
	return 0 ;
}

