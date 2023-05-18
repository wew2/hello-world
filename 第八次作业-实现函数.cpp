#include <iostream>
using namespace std;
class MyStr
{
public:
    MyStr(){}
    int mystrstr(char a[], char b[])
    {
        int i = 0, j = 0;
        for (i = 0; a[i] != '\0'; i++)
        {
            for (j = 0; b[j] != '\0' && a[i + j] != '\0'; j++)
            {
                if (a[i + j] != b[j])
                    break;
            }
            if (b[j] == '\0')
                return i;
        }
        return -1;
    }
};
int main()
{
    char a[510] = { 0 }, b[510] = { 0 };
    MyStr s;
    cin.getline(a, 500);
    cin.getline(b, 500);
    cout << s.mystrstr(a, b);
    return 0;
}
