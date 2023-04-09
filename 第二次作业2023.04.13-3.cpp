#include <iostream>
using namespace std;
class Trans
{
private:
    int mNmb;
public:
    Trans(int n){mNmb = n;}
    void toNjz(int b)
    {
        int a[20],n=0;
        int t = mNmb;
        if(b == 10)
        {
            cout << mNmb<<endl;
            return ;
        }
        while(t)
        {
            a[n] = t%b;
            n++;
            t/=b;
        }
        for(n--;n>=0;n--)
            cout << a[n];
        cout << endl;
    }
};
int main()
{
    int n;
    int a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        Trans t(a);
        t.toNjz(b);
    }
    return 0;
}
