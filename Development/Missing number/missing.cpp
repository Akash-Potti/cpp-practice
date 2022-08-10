#include <iostream>
using namespace std;
// function to get missing number
int missingnumber(int a[], int n)
{
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main()
{
    int arr[] = {1, 2, 3, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    // function call
    int miss = missingnumber(arr, N);
    cout << miss;
    return 0;
}
