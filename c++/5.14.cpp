// waiting.cpp -- using clock() in time delay loop
#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	cout << "Enter the delay time, in second: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;    // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock()-start < delay)             // wait untill time elapses
	;                                         // note the semicolon
	cout << "done\a\n";
	return 0;
}
