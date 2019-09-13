// inch incharge foot 1foot=12inch
#include <iostream>
using namespace std;
int main()
{
	cout << "Use an integer for your height :______\b\b\b\b\b\b ";
	int height;
	cin >> height;
	const int yinzi =12 ;
    int foot ;
    int inch ;
    foot = height / yinzi ;
    inch = height % yinzi ;
    cout << "Your height is " << foot << " foot " << inch << " inch.";
	return 0;	
 } 

