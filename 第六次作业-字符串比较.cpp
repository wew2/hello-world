#include <iostream>
#include<string.h>
using namespace std;
class StrFind
{
public:
    StrFind()  {}
    void find(const char* p1,const char* p2)
    {
        int cnt = 0;
        for (int i = 0; i <= strlen(p2) - strlen(p1); i++)
        {
            int j = 0;
            for (; j < strlen(p1); j++)
            {
                if (p1[j] != p2[i + j])
                    break;
            }
            if (j == strlen(p1))
            {
                cnt++;
                if (cnt == 1)
                    cout << i;
                else
                    cout << " " << i;
            }
        }
        if (cnt == 0)
            cout << "-1";
    }
};
int main()
{
    char p1[10001] = { 0 };
    char p2[10001] = { 0 };
    cin.getline(p1,10000);
    cin.getline(p2,10000);
    StrFind ph;
    ph.find(p1,p2);
    return 0;
}
