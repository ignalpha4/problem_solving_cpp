#include <bits/stdc++.h>
using namespace std;

// fibonnaci series till n numbers
// 0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
// 0 1  2  3  4  5  6  7   8   9   10

void fib(int n)
{
    int a = 0, b = 1, ans = 0;

    if (n == 0)
    {
        cout << a << endl;
    }

    for (int i = 1; i < n; i++)
    {

        ans = a + b;
        a = b;
        b = ans;
    }
    cout << b << endl;
}

int main()
{
    int n;
    cin >> n;

    fib(n);

    return 0;
}