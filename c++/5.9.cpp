// forstr2.cpp -- reversig an array
#include <iostream>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	
	// physically modify string object
	char temp;
	int i , j;
	for (j = 0, i = word.size()-1; j < i; --i, ++j)
	{                         // start block
		temp =word[i];
		word[i] = word[j];
		word[j] = temp;
	}                         // end block
	cout << word << "\nDone\n";
	return 0;
}
