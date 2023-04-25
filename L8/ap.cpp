#include <bits/stdc++.h>
using namespace std;

int ap(int n)
{
    int ans = (3 * n + 7);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = ap(n);
    cout << "Answer is:" << ans << endl;

    return 0;
}