#include <iostream>
using namespace std;
class Number
{
private:
    int a, b;    
    int n;
public:
    Number(int _a,int _b):a(_a),b(_b) {}
    void show()
    {
        int nmb = 0; 
        cout << a / b;
        int t = a % b;
        if (t == 0)
        {
            cout << endl;
            return;
        }
        cout << ".";
        a = (a % b)*10;
        while (a!= 0 && nmb < 200)
        {
            cout << a / b;
            a = (a % b) * 10;
            nmb++;
        }
        cout << endl;
    }
};
int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    Number nb(a, b);
    nb.show();
    return 0;
}
