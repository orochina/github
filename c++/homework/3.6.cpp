//enter the mileage in miles and gallon ,find the mile/gollon
#include <iostream>
using namespace std ;
int main()
{
	cout << "Enter the miles you have driven: ";
	double n_miles ;
	cin >> n_miles ;
	cout << "Enter the oil you have uesd: ";
	double n_gallon ;
	cin >> n_gallon ;
	double per_gallon ;
	per_gallon = n_miles/n_gallon ;
	cout << "Using a gallon you can drive " << per_gallon << " miles.";
	return 0;
}
