#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    while (n > 0)
    {
        int remainder = n % 10;
        ans = ans + remainder;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}

//----------------------------------

// to reverse the digit
// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 0;

//     while (n > 0)
//     {
//         int remainder = n % 10;
//         ans = (ans * 10) + remainder;
//         n = n / 10;
//     }
//     cout << ans << endl;
//     return 0;
// }
