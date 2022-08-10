#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, arr[100], j, no;
    cout << "Enter the size of the array: " << endl;
    cin >> no;
    cout << "Enter " << no << " elements into the array";
    for (i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate values are: ";
    for (i = 0; i < no; i++)
    {
        for (j = i + 1; j < no; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j];
            }
        }
    }
    getch();
}