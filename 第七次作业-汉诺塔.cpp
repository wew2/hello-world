#include <iostream>
#include<stdio.h> 
using namespace std;
class HanNuo
{
private:
    int idb[20] = { 0 }, idc[20] = { 0 }, idd[20] = { 0 };  
    int nmbb, nmbc, nmbd;            
    char g_b, g_c, g_d;  
    int stepNo;
    int nPanzi; 
public:
    HanNuo(int n,char a='A', char b='B', char c='C') {
        g_b = a;
        g_c = b;
        g_d = c;
        nmbb = 20, nmbc = 0, nmbd = 0;
        stepNo = 1;
        int i;
        nPanzi = n;
        nmbb = n;
        for (i = 0; i < n; i++)
            idb[i] = n - i;
    }
    void move(char x, char y)
    {
        int id;
        if (x == g_b)
        {
            id = idb[nmbb - 1];
            nmbb--;
            printf("Step%d: Move Disk%d from %c to %c\n", stepNo,id, x, y);
            stepNo++;
            if (y == g_c)
                idc[nmbc++] = id;
            else
                idd[nmbd++] = id;
        }
        else if (x == g_c)
        {
            id = idc[nmbc - 1];
            nmbc--;
            printf("Step%d: Move Disk%d from %c to %c\n", stepNo, id, x, y);
            stepNo++;
            if (y == g_b)
                idb[nmbb++] = id;
            else
                idd[nmbd++] = id;
        }
        else
        {
            id = idd[nmbd - 1];
            nmbd--;
            printf("Step%d: Move Disk%d from %c to %c\n", stepNo, id, x, y);
            stepNo++;
            if (y == g_b)
                idb[nmbb++] = id;
            else
                idc[nmbc++] = id;
        }
    }
    void hanio(int n, char b, char c, char d)
    {
        if (1 == n)
        {
            move(b, d);
        }
        else
        {
            hanio(n - 1, b, d, c);
            move(b, d);
            hanio(n - 1, c, b, d);
        }
    }
    void deal()
    {
        hanio(nPanzi, g_b, g_c, g_d);
    }
};
int main()
{
    int n = 0;
    cin >> n;
    HanNuo hn(n);
    hn.deal();
    return 0;
}
