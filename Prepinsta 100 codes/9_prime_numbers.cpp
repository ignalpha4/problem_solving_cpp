// C++ Program to Check Whether the Number is Prime or Not

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }

    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if (isprime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }

    return 0;
}