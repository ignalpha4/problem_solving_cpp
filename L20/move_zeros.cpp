/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


*/

// here we will move nonzero values to first and keep a pointer i which will indicate the index of nonzero value
// we will loop and find nonzero value then we will swap with i index .after loop completion all zeros will be at end

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 0, 5, 2, 8, 0, 0, 5, 2, 0};

    int i = 0; // a pointer to point to index of nonzero values

    for (int j = 0; j < 10; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++; // increment the index of nonzero value
        }
    }

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}