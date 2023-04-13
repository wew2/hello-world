#include <iostream>
#include <iomanip>
using namespace std;
class Circle
{
private:
    double radius; 
public:
    Circle(double r) :radius(r) {}
    double Zhijing() { return 2 * radius; }
    double Area() { return 3.14 * radius * radius; }
    double Zhouchang() { return 2 * 3.14 * radius; }
};
int main()
{
    double r;
    cin >> r;
    Circle cr(r);
    cout << "ֱ��=" << cr.Zhijing() << endl;
    cout << "�ܳ�=" << cr.Zhouchang() << endl;
    cout << "���=" << cr.Area() << endl;
    return 0;
}
