#include <bits/stdc++.h>
using namespace std;

// check if number is even or odd

int main()
{
    int n;
    cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Even" << endl;
    // }
    // else
    // {
    //     cout << "Odd" << endl;
    // }

    // using ternary operaator

    n % 2 == 0 ? cout << "Even" << endl : cout << "ODD" << endl;

    return 0;
}