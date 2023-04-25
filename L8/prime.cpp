#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    for (int i = 2; i < n - 1; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }

    return 0;
}