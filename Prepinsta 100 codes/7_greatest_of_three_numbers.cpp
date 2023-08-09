/*
Program to find the Greatest of Three Numbers in C++

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // Approach 1: using if-else
    /*
    if (n1 >= n2 && n1 >= n3)
    {
        cout << n1 << endl;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << n2 << endl;
    }
    else
    {
        cout << n3 << endl;
    }
    */

    // or nested way

    /*
    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            cout << n1 << endl;
        }
        else
        {
            cout << n3 << endl;
        }
    }
    else if (n2 >= n1)
    {
        if (n2 >= n3)
        {
            cout << n2 << endl;
        }
        else
        {
            cout << n3 << endl;
        }
    } */

    // Approach 2: using ternary operator

    /*
    int temp = 0, result = 0;

    temp = n1 > n2 ? n1 : n2;
    result = temp > n3 ? temp : n3;

    cout << result << endl;
    */

    // Approach 3 : using max inbuilt function

    int result = max(n3, max(n1, n2)); // order can be any

    cout << result << endl;

    return 0;
}