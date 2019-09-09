//ÍøÉÏÊµÀı2¡ª¡ª7
#include <iostream>
using namespace std;

int main()
{
	void displayTime(int hour,int minute);
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour ;
	cout << " Enter the number of minutes: ";
	int minute;
	cin >> minute ;
	displayTime(hour,minute);
	return 0; 
 } 
 void displayTime(int hour,int minute)
 {
 	cout << "Time: " << hour << ":" << minute << endl ;
  }
