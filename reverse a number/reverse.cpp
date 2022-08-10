#include <iostream>
using namespace std;
int main()
{
    int n, reversed_number = 0, remainder;
    cout << "Enter a number: " << endl;
    cin >> n;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed number: " << reversed_number << endl;
    return 0;
}