#include <iostream>
using namespace std;
int main()
{
    int n;
    long factorial = 1.0;
    cout << "Enter the number: " << endl;
    cin >> n;
    if (n < 0)
        cout << "factorial for negative number doesnt exist" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }
    return 0;
}