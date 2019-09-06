// 输入一个以long为单位的距离 然后转化为码

#include <iostream>
using namespace std;

int dis;
int main()
{
	cout << "Set a distance in long units: " << endl;	
	cin >> dis;
	dis = dis * 220 ;
	cout << "It's a diastance in yd code units: " << dis << endl;
	return 0 ;
}

