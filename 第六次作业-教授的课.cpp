#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Check
{
public:
    Check()  {}
    void IsCancel(int a[], int n, int k)
    {
        int tmp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
                tmp++;
        }
        if (tmp < k)
            cout << "YES";
        else
            cout << "NO";
    }
};
int main()
{
    int n, k;
    int a[1001];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Check ck;
    ck.IsCancel(a, n, k);
    return 0;
}
