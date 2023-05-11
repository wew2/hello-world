#include<iostream>
#include<string.h>
#include<stdio.h> 
using namespace std;
class Reverse
{   
public:
    void reverse(const char* p)
    {
        int len = strlen(p);
        len--;
        while (len>=0)
        {
            cout << p[len];
            len--;
        }
    }
};
int main()
{
    char buf[40] = { 0 };
    cin >> buf;
    Reverse r;
    r.reverse(buf);
    return 0;
}
