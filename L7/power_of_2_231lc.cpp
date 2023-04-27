#include <bits/stdc++.h>
using namespace std;

// we simply found out the power of 2 for all values till 2^30(till 30 because of constraints) and cheched with input n

/*
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        for (int i = 0; i <= 30; i++)
        {
            int ans = pow(2, i);
            if (ans == n)
            {
                return true;
            }
        }

        return false;
    }
};


*/

/*
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        int ans = 1;
        for (int i = 0; i <= 30; i++)
        {
            if (ans == n)
            {
                return true;
            }

            if (ans < INT_MAX / 2)
                ans = ans * 2;
        }

        return false;
    }
};

*/

// this approach is explained in arrays video
// in this approach if the binary representation of number contains only single 1 then it is in power of 2
//  as the binary numbers are represented in the power of 2 form only (to understand watch lect 9 time: 1:04:00)
class Solution
{

public:
    bool isPowerOfTwo(int n)
    {
        int ans[100] = {0};

        int i = 1;
        while (n != 0)
        {

            ans[i] = n & 1;
            n = n >> 1;
            i++;
        }

        int cnt = 0;
        for (int i = 0; i < 100; i++)
        {
            if (ans[i] == 1)
            {
                cnt++;
            }
        }

        if (cnt == 1)
        {
            return true;
        }

        return false;
    }
};
// but this is giving error when submitted on leetcode due to integer range
int main()
{
    int n;
    cin >> n;
    Solution obj;
    bool ans = obj.isPowerOfTwo(n);

    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
