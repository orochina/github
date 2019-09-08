//输入摄氏度 返回华氏温度
#include <iostream>
using namespace std;


int main()
{
	double m_Celsius; 
    double m_Fahrenheit(double m_Celsius);
	cout << " Please enter a Celsius value: ";
	cin >> m_Celsius ;
	cout << m_Celsius << " degrees Celsius is " << m_Fahrenheit(m_Celsius) << " degrees Fahrenheit " ;
	//这一行编写过程中出现了一些问题，是因为自定义函数中间参数忘了写，导致结果一直显示是1 
	return 0;
}

double m_Fahrenheit(double m_Celsius)   //函数三要素，返回类型 原型 参数 缺一不可 
{
	return 1.8*m_Celsius + 32 ;  // 很简洁的书写方式呢 
}
 
