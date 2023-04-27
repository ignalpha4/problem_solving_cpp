#include <bits/stdc++.h>
using namespace std;

// HW

int sumOfArray(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans + arr[i];
    }

    return ans;
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
    cout << "Sum of all elements in array is:" << sumOfArray(arr, n) << endl;

    return 0;
}