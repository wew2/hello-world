#include <iostream>
using namespace std;
class Person
{
private:
    int number;
public:
    Person(){
    	int number = 0;
    }
    void processInput()
    {
    	cin >> number;
        if (number<0 || number>100)
            cout << "Error" <<endl;
        else if (number<=10)
        	cout << "Children" <<endl;
        else if (number<=20)
            cout << "Teenagers" <<endl;
        else if (number<=40)
            cout << "Youth" <<endl;
        else if (number<=50)
            cout << "middle-aged" <<endl;
        else if (number<=80)
            cout << "Elderly" <<endl;
        else
            cout << "Old man" <<endl; 
    }
};
int main()
{   
    Person p;
    p.processInput();
    return 0;
}
