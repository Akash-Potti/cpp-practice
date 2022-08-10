#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    if ((a >= b && a >= c))
        cout << "The largest number is: " << a << endl;
    else if ((b >= a && b >= c))
        cout << "The Largest number is: " << b << endl;
    else
        cout << "The Largest number is: " << c << endl;
    return 0;
}