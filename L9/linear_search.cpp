#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
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

    cout << "Enter element to search" << endl;
    int key;
    cin >> key;

    if (linearSearch(arr, n, key))
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    return 0;
}
