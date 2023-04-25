#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int ncr(int n, int r)
{
    return (factorial(n)) / ((factorial(r)) * (factorial(n - r))); // ncr= (n!)/(r!)*(n-r!)
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "anser is " << ncr(n, r) << endl;

    return 0;
}