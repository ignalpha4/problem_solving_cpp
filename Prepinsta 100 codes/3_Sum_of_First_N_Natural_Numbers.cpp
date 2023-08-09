
#include <bits/stdc++.h>
using namespace std;

/*
    Given an integer input the objective is to write a code to Find the Sum of N Natural Numbers in C++.
*/

int main()
{

    int n;
    cin >> n;

    //---------------using for loop----------------------

    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum << endl;

    //-------------using formual of sum of n natural numbers---------------------
    // ie n(n+1)/2

    int sum = n * (n + 1) / 2;

    cout << sum << endl;

    return 0;
}