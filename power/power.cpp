#include <iostream>
using namespace std;
int main()
{
    int exponent;
    float base, result = 1;
    cout << "Enter the exponent: " << endl;
    cin >> exponent;
    cout << "Enter the base: " << endl;
    cin >> base;
    cout << base << " ^ " << exponent << " = " << endl;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    cout << result << endl;
    return 0;
}