#include <bits/stdc++.h>
using namespace std;

// Check if a Number is Positive or Negative
int main()
{
    int n;
    cin >> n;

    // if (n > 0)
    // {
    //     cout << "Positive" << endl;
    // }
    // else if (n == 0)
    // {
    //     cout << "zero" << endl;
    // }
    // else
    // {
    //     cout << "Negative" << endl;
    // }

    // using ternary operator

    if (n == 0)
    {
        cout << "zero" << endl;
    }
    else
    {
        // ternary operator
        n > 0 ? cout << "Positive" : cout << "Negative";
    }

    return 0;
}