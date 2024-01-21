#include <bits/stdc++.h>
using namespace std;
// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?leftPanelTab=0

// My approach time complexity O(n^2)

// int findDuplicate(vector<int> &arr)
// {
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 return arr[i];
//             }
//         }
//     }
// }

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = findDuplicate(arr);
        cout << ans << endl;
    }
    return 0;
}
