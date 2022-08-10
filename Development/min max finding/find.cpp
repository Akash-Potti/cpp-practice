#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int result(int arr[], int n)
{
    int min = 0, max = 0;
    if (n == 1)
    {
        min = max = arr[0];
    }
    if (arr[0] > arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else
    {
        max = arr[1];
        min = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
}
int main()
{
    int arr[] = {200, 100, 50, 70, 80};
    int n = 5;
    result(arr, n);
}