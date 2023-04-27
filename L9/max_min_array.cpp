#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int N)
{
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int getMax(int arr[], int N)
{
    int max = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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

    cout << "Maximum in array is:" << getMax(arr, n) << endl;
    cout << "Minimum or array is:" << getMin(arr, n) << endl;

    return 0;
}
