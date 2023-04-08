#include <iostream>
using namespace std;
class Yh
{
private:
    int nmb;
public:
    Yh(int n) :nmb(n) {}
    int f(int i) {             
        if (i == 1 || i == 0)
            return 1;
        return i * f(i - 1);
    }
    void display() 
    {
        int i, j, xishu;       
        for (i = 0; i < nmb; i++) {
            for (j = 0; j <= i; j++) {
                xishu = f(i) / (f(i - j) * f(j));
                cout << xishu<<" ";
            }
            cout << endl;
        }
    }
};
int main() {
    int N, i, nmb;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> nmb;
        Yh y(nmb);
        y.display();
    }
    return 0;
}	
