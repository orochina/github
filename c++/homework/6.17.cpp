
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
	cout << "�ļ��й��� " << num << " ���ַ�" << endl;
	return 0;
}
//��������������������������������
//��Ȩ����������ΪCSDN���������˹Τ����������ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/john_bian/article/details/78398187
