#include <iostream>
using namespace std;
class CallSame
{
private:
    int *p;
    int n;
public:
    CallSame() {n=0;}
    CallSame(int *p,int n)
    {
        this->n = n;
        this->p = new int[n];
        for(int i=0;i<n;i++)
            this->p[i] = p[i];
    }
    ~CallSame()
    {
        if(p!=NULL)
        {
            delete []p;
            p = NULL;
        }
    }
    void Call()
    {
        int count = 0,num = 0;
        for(int i=0;i<n-1;i++)
        {
            count = 1;
            if(i!=0 && p[i]==p[0])
                continue;
            for(int j=i+1;j<n;j++)
            {
                if(p[i] == p[j])
                {
                    count++;
                    if(i!=0)
                        p[j] = p[0];
                }
            }
            if(count == 2)
            {
                num++;
                count = 0;
                cout<<p[i]<<" ";
            }
        }
        if(num==0)
            cout<<"none";
    }
};
int main()
{
    int a[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    CallSame cs(a,n);
    cs.Call();
    return 0;
}
