// inch foot pound 转化 m kg 并求 BMI
#include <iostream>
using namespace std;
int main()
{
	const double m_height = 0.0254;
	const double m_weight = 2.2;
	const double m_enchange = 12;
	cout << "Tell me your Height:____foot____inch, and your weight:____pound\n";
	
	int m_foot ;
	int m_inch ;
	int m_pound ;
	double m_kg ;
	double m_mi ;
	double BMI ;
	cin >> m_foot >> m_inch >> m_pound ;
	m_mi = (m_foot/m_enchange+m_inch)*m_height;
	m_kg = m_pound * m_weight ; 
	BMI = m_kg / m_mi ;
	cout << " Your BMI is : " << BMI ;
	return 0 ;
 } 
 
