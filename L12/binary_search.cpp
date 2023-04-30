#include <bits/stdc++.h>
using namespace std;

//  NOTE: binary search condition : the array must be sorted in aascending or descending order
// time complexity O(log n)

int binary_search(int arr[], int n, int k)
{
    int start = 0;   // storing the starting index
    int end = n - 1; // storing the end index

    int mid = start + (end - start) / 2; // finding mid of the array and checking the element
                                         // mid =(start + end) / 2        .this formula will not work when we add large integers whose sum cannot be stoed in integer datatype
                                         // so we use new formula to overcome this issue

    while (start <= end)
    {
        if (arr[mid] == k) // checking if element exists
        {
            return mid; // if present returning the index
        }

        if (k > arr[mid]) // if key value is greater than that of present at the current mid index
        {
            start = mid + 1; // if so go to right half and to do so we updated the start to mid+1
        }
        else // if key<arr[mid]
        {
            end = mid - 1; // we go to left half by updating end to mid-1;
        }

        mid = start + (end - start) / 2; // recalculating the new mid it can be right of left part
    }

    return -1;
}

int main()
{
    int n;
    cout << "size of array:" << endl;
    cin >> n;

    cout << "Enter array elements:" << endl;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Element to search in array:" << endl;
    int k;
    cin >> k;

    int index = binary_search(arr, n, k);

    cout << "Index of the key" << k << " is :" << index << endl;

    return 0;
}