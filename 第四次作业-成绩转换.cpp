#include <iostream>
using namespace std;
class Person
{
private:
    int score;
public:
    Person(){
    	int score = 0;
    }
    void processInput()
    {
    	cin >> score;
        if (score >=90)
            cout << "A" <<endl;
        else if (score >=80)
        	cout << "B" <<endl;
        else if (score >=70)
            cout << "C" <<endl;
        else if (score >=60)
            cout << "D" <<endl;
        else
            cout << "E" <<endl; 
    }
};
int main()
{   
    Person p;
    p.processInput();
    return 0;
}
