#include<iostream>
using namespace std;
 
int main(){
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore \t p) pianist" << endl;
	cout << "t) tree \t g) game" << endl;
	char in;
	cin >> in;
	bool finish = false;
 
	while (!finish){
		switch (in){
		case 'c':
			cout << "A maple is a carnivore." << endl;
			finish = true;
			break;
		case 'p':
			cout << "A maple is a pianist." << endl;
			finish = true;
			break;
		case 't':
			cout << "A maple is a tree." << endl;
			finish = true;
			break;
		case 'g':
			cout << "A maple is a game." << endl;
			finish = true;
			break;
		default:
			cout << "Please enter c , p , t or g : ";
			cin >> in;
		}
	}
	return 0;
}

//��Ȩ����������ΪCSDN���������˹Τ����������ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/john_bian/article/details/78398187
