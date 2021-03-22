#include <iostream>
using namespace std;
int main()
{
    int n=6, i, j, sum = 0;
   
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (j = i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}