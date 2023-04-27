#include <iostream>
using namespace std;
class Sum
{
public:
    Sum() {}
    int even(int n)
    {
        if (n % 2 == 0)
            return 1;
        else
            return 0;
    }
    void sum()
    {
        int t, s = 0;
        while (1)
        {
            cin >> t;
            if (t <= 0)
                break;
            if (even(t) == 0)
                s += t;
        }
        cout << s;
    }
};
int main()
{
    Sum s;
    s.sum();
    return 0;
}
