#include <bits/stdc++.h>
using namespace std;

// pivot element means(minimum element) NOTE:leetcode example provided in video description is different
int getpivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0]) // if mid is greater than element at index 0 that means
                                // the mid is at the first part where elements are bigger than arr[0]
        {
            s = mid + 1; // we will set start to mid+1;
        }
        else
        {
            e = mid; // when mid is in second part then we update end with mid not mid-1 as it can contain the piovet element in this case
        }
        mid = s + (e - s) / 2; // updating the mid
    }
    return s; // at last wecan return e or s as the will be representing the same index at last and then the while condition will be false
}

int main()
{
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot index is: " << getpivot(arr, 5) << endl;
    return 0;
}