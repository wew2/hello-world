#include <iostream>
using namespace std;
class Mi
{
private:
    int a[101]; 
public:
    Mi() {
        for (int i = 0; i < 101; i++)
            a[i] = 0; 
    }
    void add(int level, int xs)
    {
        a[level] = xs;
    }
    int getXs(int level)
    {
        return a[level];
    }
};
int main()
{
    int level, xs;
    int nmb = 0; 
    Mi m1, m2;
    while (nmb < 2)
    {
        cin >> level >> xs; 
        if (nmb == 0)
        {
            m1.add(level, xs);
        }
        else if (nmb == 1)
            m2.add(level, xs);
        if (level == 0)
            nmb++;
    }
    int flag = 0;
    for (int i = 100; i >=0; i--)
    {
        int t = m1.getXs(i) + m2.getXs(i);
        if (t != 0)
        {
            if (flag != 0)
                cout << "+";
            if (i > 1)
                cout << t << "x" << i;
            else if (i == 1)
                cout << t << "x";
            else if (i == 0)
                cout << t;
            flag++;
        }
    }
    return 0;
}
