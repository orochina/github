// mixtypes.cpp -- some type combinations
#include <iostream>

struct antarctica_years_end
{
	int year;
/* some really intereating data, etc. */
 } ;
 
 int main()
 {
 	antarctica_years_end s01, s02 ,s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];       // array of 3 structures
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const antarctica_years_end * arp[3] = {&s01, &s02, &s03} ;
	std::cout << arp[1]->year << std::endl;    
// 只在这几个语句中使用的话计算时间0.30s 会比 使用using namespace std 0.4s 快
	const antarctica_years_end ** ppa = arp;
    const antarctica_years_end ** ppb = arp;
    std::cout << (*ppa)->year << std:: endl;
    std::cout << (*(ppb+1))->year << std::endl;   
    return 0;
 } 
