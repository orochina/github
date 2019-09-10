// hexoct1.cpp -- shows hex and octal liter
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42 ;          // decimal interger literal
	int waist = 0x42 ;        // hexadecimal interger literal
	int inseam = 042 ;         // octal integer interal
	
	cout << "Monsieur cutd a striking figure!\n*";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0 ; 
}
 
