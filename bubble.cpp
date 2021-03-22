#include <iostream>
using namespace std;

void bubble(int a[], int n)
{
    int i, j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
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
    bubble(a, n);
    for (int i = 0; i < n; i++)
       {
		 cout<< a[i];
        cout << "  ";
}
}