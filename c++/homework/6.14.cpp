
#include<iostream>
using namespace std;
 
const int strsize = 25;
const int num = 5;
 
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
 
int main(){
 
	bop peoples[num] = {
		{ "�ܲ�", "ة��", "�ϵ�",1 },
		{ "����", "������", "����",0 },
		{ "����", "����ͤ��", "�Ƴ�",1 },
		{ "����", "˳ƽ��", "����",2 },
		{ "���", "����", "���",2 }
	};
 
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name \t b. display by title" << endl;
	cout << "c. display by bopname \t d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
 
	char c;
	cin >> c;
	bool finish = false;
 
	while (!finish){
		switch (c){
		case 'a':
			for (int i = 0; i < num; i++){
				cout << peoples[i].fullname << endl;
			}
			cout << "Next choice: ";
			cin >> c;
			break;
		case 'b':
			for (int i = 0; i < num; i++){
				cout << peoples[i].title << endl;
			}
			cout << "Next choice: ";
			cin >> c;
			break;
		case 'c':
			for (int i = 0; i < num; i++){
				cout << peoples[i].bopname << endl;
			}
			cout << "Next choice: ";
			cin >> c;
			break;
		case 'd':
			for (int i = 0; i < num; i++){
				switch (peoples[i].preference){
				case 0:
					cout << peoples[i].fullname << endl;
					break;
				case 1:
					cout << peoples[i].title << endl;
					break;
				case 2:
					cout << peoples[i].bopname << endl;
					break;
				}
			}
			cout << "Next choice: ";
			cin >> c;
			break;
		case 'q':
			cout << "Bye!" << endl;
			finish = true;
			break;
		default:
			cout << "Next choice: ";
			cin >> c;
			break;
		}
	}
 
	return 0;
} 
//��������������������������������
//��Ȩ����������ΪCSDN���������˹Τ����������ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/john_bian/article/details/78398187
