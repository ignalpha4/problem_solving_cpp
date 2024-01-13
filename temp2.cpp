#include <bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[10] = {4, 5, -14, 23, 67, -98, 432, 421, 23};

    cout << "Before swap:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "after swap" << endl;

    swap_alternate(arr, 9);

    return 0;
}