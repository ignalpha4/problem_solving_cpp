#include <bits/stdc++.h>
using namespace std;

// program to find nth element value from fibonnaci series
// for eg n=6 series is 0 1 1 2 3 5 8 13 21 ...  o/p should be 8 as it is at index 6
int fibonacci(int n)
{

    int a = 0;
    int b = 1;
    int ans = 0;
    if (n == 1)
    {
        return a;
    }
    if (n == 2)
    {
        return b;
    }

    for (int i = 2; i <= n; i++)
    {
        ans = a + b;
        a = b;   // updating previous with b
        b = ans; // updating ne
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    int ans = fibonacci(n);

    cout << "answer is:" << ans << endl;

    return 0;
}