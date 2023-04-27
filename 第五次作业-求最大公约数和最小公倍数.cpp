#include <iostream>
using namespace std;
class Number
{
private:
    int a, b;
public:
    Number(int _a, int _b) :a(_a), b(_b) {}
    int gys()
    {
        int t = a > b ? b : a;
        for (; t >= 1; t--)
        {
            if (a % t == 0 && b % t == 0)
                return t;
        }
        return 1;
    }
    long long gbs()
    {
        long long t = (long long)a * b/gys();
        return t;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    Number n(a, b);
    cout << n.gys() << endl << n.gbs();
    return 0;
}
 
