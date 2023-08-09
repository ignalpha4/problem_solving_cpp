/*

Program to find Prime Numbers in a given range in C++

Here we will discuss how to find prime numbers in the range specified by the user using C++ programming language.

In this program, the user will specify a range and we will check for every number in the range for being prime

*/

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
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}