#include <iostream>
using namespace std;
int main()
{
    int number, range;
    cout << "Enter the number: " << endl;
    cin >> number;
    cout << "Enter the range: " << endl;
    cin >> range;
    for (int i = 1; i <= range; ++i)
    {
        cout << number << " * " << i << " = " << number * i << endl;
    }
    return 0;
}