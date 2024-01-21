#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int key, int n)
{
    int s = 0;
    int e = n - 1;

    int mid = (s + e) / 2;

    while (s <= e)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;

    cout << "Enter key to search : " << endl;
    cin >> key;

    int answer = binary_search(arr, key, n);

    if (answer == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index :" << answer << endl;
    }

    return 0;
}