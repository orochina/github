//�������϶� ���ػ����¶�
#include <iostream>
using namespace std;


int main()
{
	double m_Celsius; 
    double m_Fahrenheit(double m_Celsius);
	cout << " Please enter a Celsius value: ";
	cin >> m_Celsius ;
	cout << m_Celsius << " degrees Celsius is " << m_Fahrenheit(m_Celsius) << " degrees Fahrenheit " ;
	//��һ�б�д�����г�����һЩ���⣬����Ϊ�Զ��庯���м��������д�����½��һֱ��ʾ��1 
	return 0;
}

double m_Fahrenheit(double m_Celsius)   //������Ҫ�أ��������� ԭ�� ���� ȱһ���� 
{
	return 1.8*m_Celsius + 32 ;  // �ܼ�����д��ʽ�� 
}
 
