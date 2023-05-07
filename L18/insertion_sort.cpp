#include <bits/stdc++.h>
using namespace std;
// in insertion sort we consider first element as sorted and then compare the next element with previous sorted if less then put in left side or else in right side.
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // we start from 1 bcoz arr[0] element we consider as sorted
    {
        int temp = arr[i]; // we are storing the first unsorted element at ith index in temp

        int j = i - 1; // we start llop from i-1 bcoz the i-1 part will be sorted and we need to check the ith element in this part

        for (; j >= 0; j--)
        {
            if (arr[j] > temp) // if the element at ith index is smaller than that in the sorted array we shift the array and chech for next element until
            // we find and element which is smaller than ith element if we find that we terminate
            {
                arr[j + 1] = arr[j]; // we are shifting
            }
            else
            {
                break; // terminating condition
            }
        }

        arr[j + 1] = temp; // after the above conditions are checked then the jth ointer will be at location which has element less than that of temp
        // so we will place the temp in front of it.
    }
}
// if not understood by reading watch video
int main()
{
    int arr[5] = {10, 6, 12, 1, 5};

    insertionSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// time complexity o(n2)
// best case o(n)
// worst caseo(n2)
// space o(1)
