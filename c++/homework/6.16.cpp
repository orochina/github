
#include<iostream>
#include<string>
using namespace std;
 
struct donation{
	string name;
	double money;
};
 
int main(){
	int num;
	cout << "Please enter the number of donors: ";
	cin >> num;
	donation *d = new donation[num];
	int bigger = 0;
	
	for (int i = 0; i < num; i++){
		cout << "Please enter the name and money:" << endl;
		cin >> d[i].name;
		cin >> d[i].money;
		if (d[i].money>10000){
			bigger++;
		}
	}
 
	if (bigger > 0 && bigger < num){
		cout << "Grand Patrons" << endl;
		for (int i = 0; i < num; i++){
			if (d[i].money>10000){
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++){
			if (d[i].money <= 10000){
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		return 0;
	}
 
	if (bigger == 0){
		cout << "Grand Patrons" << endl;
		cout << "none" << endl;
		cout << "Patrons" << endl;
		for (int i = 0; i < num; i++){
			if (d[i].money <= 10000){
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		return 0;
	}
 
	if (bigger == num){
		cout << "Grand Patrons" << endl;
		for (int i = 0; i < num; i++){
			if (d[i].money>10000){
				cout << d[i].name << "\t" << d[i].money << endl;
			}
		}
		cout << "Patrons" << endl;
		cout << "none" << endl;
	}
delete[]d;
	return 0;
}
//��������������������������������
//��Ȩ����������ΪCSDN���������˹Τ����������ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/john_bian/article/details/78398187
