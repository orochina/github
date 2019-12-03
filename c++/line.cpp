#include <iostream>

using namespace std;

class Line
{
public:
	void setLength(double len);
	double getLength(void);
	Line();                // 构造函数
private:
    double length;	
};

// 成员函数定义，包括构造函数 
Line::Line(void)
{
    cout << "Object is being created" << endl; 
}

void Line::setLength(double len)
{
	length = len;
}
// 程序的主函数
int main()
{
	Line line;
	
	// 设置长度
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() << endl;  
	 // 这里老是莫名奇妙的报错，说是未定义，不知道为啥 
	
	return 0; 
 } 

