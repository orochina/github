
#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
 
	char c;
	long num = 0;
 
	ifstream read;
	read.open("F:\\Wine.txt");
 
	while (read >> c){
		num++;
	}
	cout << "文件中共有 " << num << " 个字符" << endl;
	return 0;
}
//————————————————
//版权声明：本文为CSDN博主「麦克斯韦的妖精」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/john_bian/article/details/78398187
