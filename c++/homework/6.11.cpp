// ����������ĸ������ @ ʱ��������д��ĸתΪСд��Сд��ĸתΪ��д 

#include <iostream>
#include <cctype>
using namespace std;
int main()
{    
        char ch;
        cin >> ch;
        while(ch != '@')
        {
                if(islower(ch))
                {
                        ch = toupper(ch);
                }
                else if(isupper(ch))
                {
                        ch = tolower(ch);
                }
                cout << ch << endl;
                cin >> ch;
        }
        return 0;
}

