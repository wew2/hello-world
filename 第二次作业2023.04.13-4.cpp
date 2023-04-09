#include <iostream>
#include<stdio.h>
using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;
private:
    bool rn(int year)
    {
        if((year%400==0) || (year%4==0 && year%100 != 0))
            return true;
        return false;
    }
    int getYearDays()
    {
        int days = 0;
        for(int i=1900;i<year;i++)
        {
            if(rn(i))
                days += 366;
            else
                days += 365;
        }
        return days;
    }
    int getMonthDays()
    {
        int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int days = 0;
        for(int i=1;i<month;i++)
            days += m[i-1];
        if(month>2 && rn(year))
            days++;
        return days;
    }
public:
    Date() {}
    Date(int y,int m,int d) : year(y),month(m),day(d) {}
    int getDays()
    {
        return getYearDays() + getMonthDays() + day - 1;
    }
};
int main()
{
    const char *week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
    Date d(year,month,day);
    int days = d.getDays();
    int w = days%7;
    cout<<week[w]<<endl;
}
