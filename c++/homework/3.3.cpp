//degree minute second
#include <iostream>
using namespace std;

int main()
{
	const double convert = 60;
	int mdegrees ;
	int mminutes ;
	int mseconds ;
   
	cout << "Enter a latitude in degree, minute, and second: " << endl;
	cout << "First, enter the degrees: "; 
    cin >> mdegrees ;
    cout << "Next, enter the minutes of arc: " ;
    cin >> mminutes ;
    cout << "Finally, enter the seconds of arc: " ;
    cin >> mseconds ;
    double mlatitude ;
	mlatitude= mdegrees + mminutes/convert + mseconds/convert/convert ;
	cout << mdegrees << " degrees £¬" << mminutes << " seconds ," << mseconds << " seconds = " 
	     << mlatitude << " degrees." ;
	return 0;
 } 
