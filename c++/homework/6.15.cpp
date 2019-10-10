#include<iostream>
using namespace std;
 
int main(){
	double salary;
	cout << "请输入工资： ";
 
	while (cin >> salary){
		if (salary < 0){
			break;
		}
 
		double tax = 0;
		if (salary>5000){
			tax += (salary - 5000)*0.1;
			if (salary > 15000){
				tax += (salary - 15000)*0.05;
				if (salary > 35000){
					tax += (salary - 35000)*0.05;
				}
			}
		}
		cout << "应交税费： " << tax << " tvarp" << endl;
		cout << "请输入工资： ";
	}
 
	return 0;
}

