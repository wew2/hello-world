#include <iostream>
using namespace std;
class StrWords
{
public:
    StrWords() {}
    void split(const char* p)
    {
        int i = 0;
        int len = 0;
        char pre = '\0';
        int flag = 0;
        while (p[i] != '\0')
        {
            if (p[i] == '.' && pre != ' ') 
            {
                if (flag == 0)
                {
                    cout << len;
                    flag = 1;
                }
                else
                    cout << " " << len;
                len = 0;
                break;
            }
            else if (p[i] == ' ' && pre != ' ')
            {
                if (flag == 0)
                {
                    cout << len;
                    flag = 1;
                }
                else
                    cout << " " << len;
                len = 0;
                i++;
                pre = ' ';
            }
            else
            {
                len++;
                pre = p[i];
                i++;
            }
        }
    }
};
int main()
{
    char buf[10000] = { 0 };
    cin.getline(buf, 10000 - 1);
    StrWords w;
    w.split(buf);
    return 0;
}
