// binary search
#include <iostream>
using namespace std;
int binarysearch(int array[], int x, int high, int low)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main(void)
{
    int array[] = {20, 30, 40, 50, 60, 70, 80, 90};
    int x = 70;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarysearch(array, x, n - 1, 0);
    if (result == -1)
        cout << "Not found";
    else
        cout << "Element found in index: " << result << endl;
}