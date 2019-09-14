// day hour minute and second
#include <iostream>
using namespace std;
int main()
{
	long n_time ;
	cout << "Tell me a number of seconds: ";
	cin >> n_time ;
	const int min_convert = 60 ;
	const int hour_convert = 60 ;
	const int day_convert = 24 ;
	long n_days ;
	int n_hours ;
	int n_minutes ;
	int n_seconds ;
	n_days = n_time/min_convert/hour_convert/day_convert ;
	n_hours = n_time/min_convert/hour_convert
	        -n_days*day_convert;
	n_minutes = n_time/min_convert
	           -n_hours*hour_convert
			   -n_days*day_convert*hour_convert;
	n_seconds = n_time
	           -n_minutes*min_convert
	           -n_hours*hour_convert*min_convert
			   -n_days*day_convert*hour_convert*min_convert;
	cout << n_time << " seconds = " << n_days << " days, " 
	     << n_hours <<" hours, " << n_minutes << " minutes, " 
		 << n_seconds << " seconds";
	return 0;
 } 
