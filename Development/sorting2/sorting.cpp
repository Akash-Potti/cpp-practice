#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int a[n], i, j, temp;

    cout << "Enter the elements into the array: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Array after sorting: ";
    for (i = 0; i < n; i++)
        cout << " " << a[i];
    return 0;
}