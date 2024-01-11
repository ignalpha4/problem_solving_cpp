#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10; // we are removing the last digit for eg=101  using this we get 1

        if (digit == 1)
        {
            ans = ans + pow(2, i); // if 1 then add the 2^i to ans
        }
        n = n / 10; // to remove last element for eg 101 o/p 10

        i++; // to keep track of raise to power
    }

    cout << ans << endl;

    return 0;
}