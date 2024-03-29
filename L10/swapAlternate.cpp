#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swaplAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2) // i=i+2 as we are swapping the alternate
    {
        if ((i + 1) < n) // to check if next element is present in range
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    printArray(arr, n);
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

    swaplAlternate(arr, n);
    return 0;
}