#include <bits/stdc++.h>
using namespace std;

/*

7. Reverse Integer
Medium

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321

*/

/*

This will work for first condition but will give error for second conditon
that is :If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

class Solution
{
public:
    int reverse(int x)
    {
        int y = 0;
        while (x != 0)
        {
            int temp = x % 10;
            y = (y * 10) + temp;
            x = x / 10;
        }
        return y;
    }
};
*/

class Solution
{
public:
    int reverse(int x)
    {
        int y = 0;
        while (x != 0)
        {
            int temp = x % 10;

            if (y > (INT_MAX / 10) || y < (INT_MIN / 10)) // if value of ans is outside range
            {
                return 0;
            }

            y = (y * 10) + temp;
            x = x / 10;
        }
        return y;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    int ans = obj.reverse(n);
    cout << ans << endl;

    return 0;
}