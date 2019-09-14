// world pop ,us pop ,and the percent
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the world's population: ";
	long long world_pop ;
	cin >> world_pop ;
	cout << "Enter the population of the US: ";
	long long us_pop;
	cin >> us_pop ;
	long double percent ;
	percent = (long double) us_pop*100/world_pop ;
	cout << "The population of the US is " << percent << "% of the world population.";
	return 0;
}
