#include <bits/stdc++.h>
using namespace std;

// solve by me
// logic: we check if element i is greater than i+1 as if it is sorted and rotated array there will be only one such pair
// if there are more than one pairs then it is not true

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};

    // code

    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n]) // used %n for cyclic check as there can be cycle as well
        {
            count++;
        }
    }

    if (count > 1)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }

    return 0;
}