#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (end >= start)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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

    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}