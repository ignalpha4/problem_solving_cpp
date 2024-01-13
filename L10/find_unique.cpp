/*

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1]. Now, in the given array/list, 'M' numbers are present twice and one number is present only

once You need to find and return that number which is unique in the array/list.

Note:

Unique element is always present in the array/list according to the given condition.

https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;

        // when we xor with same number we get 0 and when we xor with 0 we get same element
        // using this property we will solve this question

        for (int i = 0; i < n; i++)
        {
            ans = ans ^ arr[i];
        }

        cout << ans << endl;
    }

    return 0;
}

// eg i/p: 1 2 1 2 4
// o/p: 4