/*

Find the Greatest of the Two Numbers in C++
Given two integers as input, the objective is to check both numbers for the greatest and write a code to find the greatest of the two numbers in C++.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    // Approach 1: using if else
    /*
    if (n1 > n2)
    {
        cout << "first number is greater" << endl;
    }
    else if (n1 == n2)
    {
        cout << "Are equal" << endl;
    }
    else
    {
        cout << "Second number is greater" << endl;
    }
    */

    // Approach 2: using ternary operator

    /*
    if (n1 == n2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        n1 > n2 ? cout << "first number is greater" << endl : cout << "Second number is greater" << endl;
    }
    */

    // Approach 3: using inbuilt max function

    if (n1 == n2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << max(n1, n2) << " is greatest" << endl;
    }

    return 0;
}