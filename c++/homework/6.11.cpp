// 键盘输入字母，遇到 @ 时结束，大写字母转为小写，小写字母转为大写 

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

