#include <iostream>
using namespace std;
class PhoneNumber
{
public:
    PhoneNumber()  {}
    void trans(const char* p)
    {
        int i = 0;
        while (p[i] != '\0')
        {
            switch (p[i])
            {
            case 'A':
            case 'B':
            case 'C':
                cout << "2";
                break;
            case 'D':
            case 'E':
            case 'F':
                cout << "3";
                break;
            case 'G':
            case 'H':
            case 'I':
                cout << "4";
                break;
            case 'J':
            case 'K':
            case 'L':
                cout << "5";
                break;
            case 'M':
            case 'N':
            case 'O':
                cout << "6";
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                cout << "7";
                break;
            case 'T':
            case 'U':
            case 'V':
                cout << "8";
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << "9";
                break;
            default:
                break;
            }
            i++;
        }
    }
};
int main()
{
    char buf[10] = { 0 };
    cin >> buf;
    PhoneNumber ph;
    ph.trans(buf);
    return 0;
}
