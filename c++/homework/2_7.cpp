//输入小时和分钟
#include <iostream>
using namespace std ;
//一直说有问题 但是不知道哪里有问题 哎 
//最后明白了 是因为自己在设定函数时 吧display打成了dispaly 真是的 
int main()
{
	void disPlay(int hour,int min);
	cout << "Enter thr number of hours: " ;
	int hour;
 	cin >> hour;
 	cout << "Enter the number of minutes: ";
 	int min;
 	cin >> min;
 	disPlay(hour,min);
	return 0;
 } 
 
void disPlay(int hour , int min)
 {
 	cout << "Time: " << hour << " : " << min ;
  }
