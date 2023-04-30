#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{

    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e - s) / 2;

    while (s < e) // we will chech till s<e only     Not when it is equal
    {
        if (arr[mid] < arr[mid + 1]) // to check if the element is less than the next one we update start to mid+1;
        {
            s = mid + 1;
        }
        else
        {
            e = mid; // when element is small then the next we set end=mid and not mid -1 bcoz when mid will be the ans it will got to its previous element
        }
        mid = s + (e - s) / 2;
    }

    return s; // the start will contain the peak element index
}

int main()
{

    vector<int> arr = {0, 1, 5, 2, 1, 0};

    int ans = peakIndexInMountainArray(arr);
    cout << ans << endl;

    return 0;
}