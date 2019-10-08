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
		cout << "平均值为： " << average << "\t共有" << bigger << " 个数比平均值大" << endl;
	}
	
	return 0;
}


//版权声明：本文为CSDN博主「麦克斯韦的妖精」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/john_bian/article/details/78398187
