//网上的例子 巧妙地利用了整除和取余 非常快速明晰的coding 
#include <iostream>
using namespace std;
int main()
{
    const int DayOfHours=24;
    const int HourOfMinutes=60;
    const int MinuteOfSeconds=60;
    cout<<"Enter the number of seconds: ";
    long secondsTotal;
    cin>>secondsTotal;
    int seconds=secondsTotal%MinuteOfSeconds;
    long minutesTotal=secondsTotal/MinuteOfSeconds;
    int minutes=minutesTotal%HourOfMinutes;
    long hoursTotal=minutesTotal/HourOfMinutes;
    int hours=hoursTotal%DayOfHours;
    long days=hoursTotal/DayOfHours;
    cout<<secondsTotal<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;
    system("pause");
    return 0;
}
