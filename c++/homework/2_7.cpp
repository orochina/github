//����Сʱ�ͷ���
#include <iostream>
using namespace std ;
//һֱ˵������ ���ǲ�֪������������ �� 
int main()
{
	void disPlay(int m_hour,int m_min);
	int m_hour;
	int m_min;
	cout << "Enter thr number of hours: " ;
 	cin >> m_hour;
 	cout << "Enter the number of minutes: ";
 	cin >> m_min;
 	disPlay(m_hour,m_min);
	return 0;
 } 
 
void disPaly(int m_hour , int m_min)
 {
 	cout << "Time: " << m_hour << " : " << m_min ;
  }
