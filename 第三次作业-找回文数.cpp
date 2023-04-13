#include <iostream>
using namespace std;
class Huiwen
{
private:
    int m, k;
public:
    Huiwen(int _m,int _k):m(_m),k(_k){}
    int ishuiwen(int n)
    {
        int t = 0;
        int p = n;
        while (p)
        {
            t = t * 10 + p % 10;
            p /= 10;
        }
        if (n == t)
            return 1; 
        else
            return 0; 
    }
    void show()
    {
        int cnt = 0;
        for (int i = m+1;cnt < k; i++) 
        {
            if (ishuiwen(i))
            {
                if (cnt == 0)
                    cout << i;
                else
                    cout << " " << i;
                cnt++;
            }
        }
        cout << endl;
    }
};
int main()
{
    int N, m, k;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> m >> k;
        Huiwen hw(m, k);
        hw.show();
    }
    return 0;
}


