#include <iostream>
using namespace std;
class Trans
{
private:
    int n;
public:
    Trans(int _n):n(_n){}
    void trans()
    {
        if (n == 1)
            cout << "Spring";
        else if (n == 2)
            cout << "Summer";
        else if (n == 3)
            cout << "Fall";
        else if (n == 4)
            cout << "Winter";
        else
            cout << "Error"; 
    }
};
int main()
{
    int n;
    cin >> n;
    Trans t(n);
    t.trans();
    return 0;
}
