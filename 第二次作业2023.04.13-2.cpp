#include <iostream>
using namespace std;
class Trans
{
private:
    int mNmb;
public:
    Trans(int n){mNmb = n;}
    void showOctal()
    {
        int a[10],n=0;
        int t = mNmb;
        while(t)
        {
            a[n] = t%8;
            n++;
            t/=8;
        }
        for(int i=n;i<5;i++)
            cout <<"0"; 
        for(n--;n>=0;n--)
            cout << a[n];
    }
};
int main()
{
    int n;
    cin >> n;
    Trans tr(n);
    tr.showOctal();
    return 0;
}
 
