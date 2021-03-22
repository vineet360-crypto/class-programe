#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = (l - 1);
    for (int j = l; j <= r - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}

void QuickSort(int a[], int l, int r)
{
    if (l < r)
    {
        int p = partition(a, l, r);
        QuickSort(a, l, p - 1);
        QuickSort(a, p + 1, r);
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
    QuickSort(a, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        cout << " ";
    }
    return 0;
}