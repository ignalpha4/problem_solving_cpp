#include <bits/stdc++.h>
using namespace std;

// multiply two numbers without actually multiplying(ie without using * operator)

// int main()
// {
//     int first, second, ans = 0;
//     cin >> first >> second;

//     while (second)
//     {
//         ans = ans + first;
//         second--;
//     }
//     cout << ans;

//     return 0;
// }

//---------------------------------------------

int main()
{
    int first, second, ans = 0;
    cin >> first >> second;

    for (int i = 0; i < second; i++)
    {
        ans = ans + first;
    }

    cout << ans;

    return 0;
}