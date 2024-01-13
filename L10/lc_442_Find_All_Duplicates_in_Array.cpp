// homework : done
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {

        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 < nums.size())
            {
                if (nums[i] == nums[i + 1])
                {
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    int size;
    cin >> size;

    vector<int> array(size);

    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        array[i] = n;
    }

    vector<int> answer = obj.findDuplicates(array);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}