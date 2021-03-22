
#include <iostream>
using namespace std;


void insertion(int a[], int n)
{
    int temp;
    for (int i = 1; i < n; ++i)
    {
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
                j--;
            }
            else
            {
                break;
            }
        }
        a[j + 1] = temp;
    }
}

int main()
{
        int n;
        cout << "Enter the size of an array=";
        cin >> n;
        int a[n];
        cout << "Enter the values of an array ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
        insertion(a, n);
        for (int i = 0; i < n; i++)
           {
			 cout<< a[i];
			 cout<<"  ";
        }
}