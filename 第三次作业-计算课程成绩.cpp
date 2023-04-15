#include <iostream>
#include<stdio.h> 
#include <iomanip>
#include <string.h>
using namespace std;
class Student
{
private:
    char name[32];
    float ps; 
    float qm; 
public:
    Student()
    {
        ps = 0;
        qm = 0;
    }
    void setName(const char* _name)
    {
        strcpy_s(name, 32, _name);
    }
    void setScore( float _ps, float _qm)
    {
        ps = _ps;
        qm = _qm;
    }
    float getTotal()
    {
        return (0.4 * ps + 0.6 * qm);
    }
    void display()
    {
        cout << name << " ";
        cout << fixed << setprecision(2) << ps << " ";
        cout << fixed << setprecision(2) << qm << " ";
        cout << fixed << setprecision(2) << getTotal() << endl;
    }
};
int main()
{
    Student stu[102];
    int n = 0;
    char name[40];
    float ps, qm;
    while (cin >> name >> ps >> qm)
    {
        stu[n].setName(name);
        stu[n].setScore(ps, qm);
        n++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].getTotal() < stu[j + 1].getTotal())
            {
                Student t = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
        stu[i].display();
    return 0;
}
