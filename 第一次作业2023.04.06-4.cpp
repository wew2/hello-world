#include <iostream>
using namespace std;
class Caculate
{
private:
    int* mFz;  
    int* mFm; 
    int mNmb; 
    int sumFz; 
    int sumFm; 
public:
    Caculate(int n, int* fz, int* fm)
    {
        mFz = new int[n];
        mFm = new int[n];
        for (int i = 0; i < n; i++)
        {
            mFz[i] = fz[i];
            mFm[i] = fm[i];
        }
        mNmb = n;
    }
    ~Caculate()
    {
        if (mFz != 0)
            delete[] mFz;
        if (mFm != 0)
            delete[] mFm;
        mFz = 0;
        mFm = 0;
    }
    int gys(long long a, long long b)
    {
        long long  i = a > b ? b : a;
        for (; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
                return i;
        }
        return 1;
    }
    long long gbs(long long a, long long b)
    {
        long long s = a * b;
        return s / gys(a, b);
    }
    void sum()
    {
        sumFz = mFz[0];
        sumFm = mFm[0];
        long long x = gys(sumFz, sumFm);
        sumFz /= x;
        sumFm /= x;
        for (int i = 1; i < mNmb; i++)
        {
            long long fm = gbs(sumFm, mFm[i]); 
            long long fz = sumFz * (fm / sumFm) + mFz[i] * (fm / mFm[i]); 
            long long gy = gys(fz, fm);
            sumFz = fz/gy;
            sumFm = fm/gy;
        }
        cout << sumFz << "/" << sumFm;
    }
};
int main()
{
    int n;
    int a[12], b[12];
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c >> b[i];
    }
    Caculate cc(n, a, b);
    cc.sum();
    return 0;
}
