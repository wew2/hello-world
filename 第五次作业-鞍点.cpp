#include <iostream>
using namespace std;
class AnPoint
{
    int point[101][101];
    int n;
public:
    AnPoint() {}
    void input()
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> point[i][j];
        }
    }
    void show()
    {
        int max, x=0, y=0;
        for (int i = 0; i < n; i++)
        {
            max = point[x][0];
            x = i; y = 0;
            for (int j = 1; j < n; j++)
            {
                if (point[i][j] > max)
                {
                    max = point[i][j];
                    x = i;
                    y = j;
                }
            }
          
            int flag = 0;
            for (int k = 0; k < n; k++)
            {
                if (point[k][y] < max) 
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << x  << " " << y ;
                return;
            }
        }
        cout << "NO";
    }
};
int main()
{
    AnPoint s;
    s.input();
    s.show();
    return 0;
}
