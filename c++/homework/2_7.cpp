//����Сʱ�ͷ���
#include <iostream>
using namespace std ;
//һֱ˵������ ���ǲ�֪������������ �� 
//��������� ����Ϊ�Լ����趨����ʱ ��display�����dispaly ���ǵ� 
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
