#include <iostream>
using namespace std;
class SumDigits
{
  private:
    int number, sum;
  public: 
    SumDigits(int n)
    {
      number = n;
      sum = 0;
    }
    void calculate()
    {
      while (number > 0)
      {
        sum += number % 10; 
        number /= 10; 
      }
    }
    void display()
    {
      cout  << sum << endl;
    }
};
int main()
{
  int num;
  cin >> num;
  SumDigits obj(num); 
  obj.calculate(); 
  obj.display(); 
  return 0; 
}
