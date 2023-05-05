#include <bits/stdc++.h>
using namespace std;
// will work on lletcode 69 number problem but on codestudio you need to update mid and sqaure to unisgned long long int
class Solution
{
public:
    long long int binary_search(long long int N)
    {
        int s = 0;
        int e = N;

        long long int mid = s + (e - s) / 2;

        long long int ans = -1;
        while (s <= e)
        {
            long long int square = mid * mid;

            if (square == N)
            {
                return mid;
            }
            if (square < N) // if true we check in right part and store ans
            {
                ans = mid;
                s = mid + 1;
            }
            else // when sqaure>N we check in left part
            {

                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }

        return ans;
    }

    long long int mySqrt(int x)
    {

        return binary_search(x);
    }
};

int main()
{
    Solution obj;

    int x;
    cin >> x;

    cout << "sqrt of " << x << " is:" << obj.mySqrt(x) << endl;

    return 0;
}