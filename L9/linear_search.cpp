#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int n)
{
    int temp = 0;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        i++;
        j--;
    }

    // printing array

    cout << "reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {45, 7, 5, 2, 13};

    cout << "initial array is : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse_array(arr, 5);

    return 0;
}