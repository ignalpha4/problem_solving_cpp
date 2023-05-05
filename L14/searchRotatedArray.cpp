
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &arr, int s, int e, int k)
{
    int start = s;
    int end = e - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }

        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int getpivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = getpivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binary_search(arr, pivot, n, k);
    }
    else
    {
        return binary_search(arr, 0, pivot, k);
    }
}

int main()
{
    vector<int> arr = {2, 3, 5, 8};
    int k = 3;

    cout << search(arr, 4, 3);
}