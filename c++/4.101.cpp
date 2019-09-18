// structur.cpp -- asimple structure
#include <iostream>
struct inflatable              // structure declaration
{
	char name[20];
	float volume;
	double price;
 };
 
 int main()
 {
 	using namespace std;
 	inflatable guest = 
 	{
 		"Glorious Gloria",      // name value
 		1.88,                   // volume value
 		29.99                   // price value
 	};           // guest is astructure variable of type inflatable
  //It's initialized to the indicate values
    inflatable pal =
    {
    	"Audacious Arthur",
    	3.12,
    	32.99
	};            // pal is asecond variable of type inflatable
// NOTE: some implementations require using
// static inflatable guest =

   cout << "Expand your guest list with " << guest.name ;
   cout << " and " << pal.name << "!\n";
//pal.name is the name member or the pal variable ;
   cout << "You can have both for $";
   cout << guest.price +pal.price << ".\n";
   return 0;


  } 
 
