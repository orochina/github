//光年转换成天文单位
#include <iostream>
using namespace std;

int main()
{
	double m_light;
	double m_ast(double m_light);
	cout << "Enter the number of light years: ";
	cin >> m_light ;
	cout << m_light << " lighr years = " << m_ast(m_light) << " astronomical units." << endl ;
	return 0;
 } 
 
 double m_ast(double m_light)
 {
 	return 63240 * m_light ;
 }
