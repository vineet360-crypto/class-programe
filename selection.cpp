#include <iostream>
using namespace std;

void selection(int array[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    { 
        min=i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        swap(array[min],array[i]);
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
    selection(a, n);
    for (int i = 0; i < n; i++)
       {
		 cout<< a[i];
        cout << "  ";
}
}