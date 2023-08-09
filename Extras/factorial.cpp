#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 1;
    for (int i = n; i > 0; i--)
    {
        ans = ans * i; // this approach is if n=5 then  5*4*3*2*1
    }
    cout << ans << endl;

    return 0;
}

// or--------------------------------------------------------

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         ans = ans * i; // this approach is if n=5 then 1*2*3*4*5
//     }
//     cout << "answer is :" << ans;

//     return 0;
// }
