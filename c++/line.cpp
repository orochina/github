#include <iostream>

using namespace std;

class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line();                // ���캯��
private:
    double length;	
};

// ��Ա�������壬�������캯�� 
Line::Line(void)
{
    cout << "Object is being created" << endl; 
}

void Line::setLength(double len)
{
	length = len;
}
// �����������
int main()
{
	Line line;
	
	// ���ó���
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;  
	 // ��������Ī������ı���˵��δ���壬��֪��Ϊɶ 
	
	return 0; 
 } 

