//ourfunc.cpp -- defining youe owm fuction
#include <iostream>
void simon(int);         //function prototype for simon()

int main()
{
	using namespace std;
	simon(3);            // call the simon() function
	cout << "Pick an integer: ";
	int count;
	cin >>count;
	simon(count);        // call it again
	cout << "Done!" << endl;
	return 0;
}

void simon(int n)     //define the simon() function
{
	using namespace std;
	cout << "Simon says touch you toes " << n << " times." << endl;
}	                  // void function don't need return statements 