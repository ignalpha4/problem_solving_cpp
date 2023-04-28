#include <bits/stdc++.h>
using namespace std;
// sort one two
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sortonetwo(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        while (arr[start] == 0 && start < end)
        {
            start++;
        }
        while (arr[end] == 1 && start < end)
        {
            end--;
        }

        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 1, 1, 0, 0};

    sortonetwo(arr, 8);
    printArray(arr, 8);

    return 0;
}