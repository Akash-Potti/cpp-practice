#include <iostream>
using namespace std;

int fib_recursive(int n)
{
    if (n < 2)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n)
{
    int n_1 = 1, n_2 = 0, fib_n = 0;
    if (n < 2)
        return n;
    for (int i = 0; i < n; i++)
    {
        fib_n = n_1 + n_2;
        n_1 = n_2;
        n_2 = fib_n;
    }
    return fib_n;
}

int main()
{
    unsigned int result = fib_iterative(7000);
    cout << result;
    // 0 1 2 3 4 5 6 7
    // 0 1 1 2 3 5 8 13..
}