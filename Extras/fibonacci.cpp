#include <bits/stdc++.h>
using namespace std;

// fibonnaci series till n numbers

void fib(int n)
{
    int a = 0, b = 1, ans = 0;

    if (n == 0)
    {
        cout << a << endl;
    }

    for (int i = 2; i <= n; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }

    cout << b << endl; // why b find out :)
}

int main()
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}