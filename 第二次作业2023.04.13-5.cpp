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
        char a[40],n=0;
        int t = mNmb;
        if(t==0)
        {
            cout <<"0"<<endl;
            return ;
        }
        while(t)
        {
            int x = t%b;
            if(x<10)
                a[n] = '0'+x;
            else
                a[n] = 'A'+(x-10);
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
