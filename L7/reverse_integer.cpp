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

            if (y > (INT_MAX / 10) || y < (INT_MIN / 10)) // if value of ans is outside range that is if we multiply number which is big by 10 then
            // it will go out of range on int so we chech if y is greater than that number if so then we will return 0 or else we can calculate the ans
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

/*
Formulas:

1) Reverse

i/p:123  o/p:321

ans=(ans*10)+digit

2) same flow

i/p:123  o/p:123

ans=(digit*pow(10,i))+ans


in integer the same flow doesnt make any sense

*/