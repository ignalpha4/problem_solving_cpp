#include <bits/stdc++.h>
using namespace std;
// 189. Rotate Array

// to solve this problem use mod to repeat the cycle and use another vector to store the new postions
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;

    // code
    int n = nums.size();
    vector<int> temp(n); // if dont want to specify the size of temp then need to use this format to add elements "temp.push_back(nums[i]);"

    for (int i = 0; i < n; i++)
    {
        int shift = (i + k) % n;
        temp[shift] = nums[i];
    }

    // copy the elements back to nums

    nums = temp;

    // printing the result

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}