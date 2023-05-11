#include <iostream>
using namespace std;
class MathFunc
{
public:
    MathFunc() {}
    double pow(double x, int n)
    {
        double t = 1;
        if (n > 0)
        {
            for (int i = 0; i < n; i++)
                t = t * x;
            return t;
        }
        else if (n == 0)
            return 1;
        else
        {
            for (int i = 0; i < -n; i++)
                t = t / x;
            return t;
        }
    }
};
int main()
{
    double x;
    int n;
    char ch;
    cin >> x >> ch >> n;
    MathFunc f;
    cout << f.pow(x, n);
    return 0;
}
 
