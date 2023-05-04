#include <iostream>
using namespace std;
class Sort
{
public:
    Sort()  {}
    int sort(int num[], int n)
    {
        int i, j, t;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (num[j] > num[j + 1])
                {
                    t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            if (i < n - 1)
                cout << num[i] << " ";
            else
                cout << num[i];
        }
        return 1;
    }
};
int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Sort st;
    st.sort(a, n);
    return 0;
}
