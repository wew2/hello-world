#include <iostream>
#include<string.h>
using namespace std;
class StrSplit
{
public:
    StrSplit()  {}
    int isNmb(char c)
    {
        if (c >= '0' && c <= '9')
            return 1;
        else
            return 0;
    }
    int isBigCharacter(char c)
    {
        if (c >= 'A' && c <= 'Z')
            return 1;
        else
            return 0;
    }
    int isSmalCharacter(char c)
    {
        if (c >= 'a' && c <= 'z')
            return 1;
        else
            return 0;
    }
 
    void deal(char* p,int k)
    {
        int i = 0, j = 0;
        while (p[i] != '\0')
        {
            if (isNmb(p[i]))
                p[j++] = p[i];
            else if (isBigCharacter(p[i]))
                p[j++] = p[i];
            else if (isSmalCharacter(p[i]))
                p[j++] = p[i] - 32; 
            i++;
        }
        p[j] = '\0';
        int t = strlen(p) % k; 
        
        
        i = 0;
        while (i < t )
        {
            cout << p[i];
            i++;
        }
        while (i < strlen(p))
        {
            if(t > 0)
                cout << "-";
            int j = 0;
            while (j < k)
            {
                cout << p[i];
                i++;
                j++;
            }
        }
    }
};
int main()
{
    char p1[10001] = { 0 };
    int k;
    StrSplit ph;
    cin >> p1;
    cin >> k;
    ph.deal(p1,k);
    return 0;
}
 
