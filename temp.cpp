// this is the temporary code to test

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int ans = 0;

    while (x != 0)
    {
        int digit = x % 10;
        ans = (ans * 10) + digit;
        x = x / 10;
    }

    cout << "reverse is :" << ans << endl;

    return 0;
}