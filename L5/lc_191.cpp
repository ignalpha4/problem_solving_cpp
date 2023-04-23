// 191. Number of 1 Bits
// problem2
// NOTE:this code working on leetcode not on this compiler

#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint32_t n;
    cin >> n;

    int cnt = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            cnt++;
        }

        n = n >> 1;
    }

    cout << cnt << endl;

    return 0;
}