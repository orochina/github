#include<iostream>
#include<cctype>
using namespace std;
 
int main(){
	double donation[10];
	int num = 0;
	double sum = 0;
	
	for (int i = 0; i < 10; i++){
		if (cin >> donation[i]){
			num++;
			sum += donation[i];
		}
		else{
			break;
		}		
	}
 
	if (num != 0){
		double average = sum / num;
		int bigger = 0;
		for (int i = 0; i < num; i++){
			if (donation[i]>average)
				bigger++;
		}
		cout << "ƽ��ֵΪ�� " << average << "\t����" << bigger << " ������ƽ��ֵ��" << endl;
	}
	
	return 0;
}


//��Ȩ����������ΪCSDN���������˹Τ����������ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/john_bian/article/details/78398187
