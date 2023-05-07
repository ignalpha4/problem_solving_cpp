#include <bits/stdc++.h>
using namespace std;

/*bubble sort without optimization  tc=O(n2)*/
/*
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//optimized code

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) // here to n-i bcoz after every ith round the last element will be highest so we dont need to check it again
        {
            if (arr[j] > arr[j + 1]) // ans if we start ith loop from 0 to n-1 we will use condition n-i-1 think you will understand
                swap(arr[j], arr[j + 1]);
        }
    }
}

*/
// more optimized code
// here at first round no sapd takes place then the elements will be a<b b<c c<d and so on in such condition only there will be no swaps
// after looking at above conditionwe can say that array is already sorted in that case only there will be no swaps therefore we will break the loop after first iteration of j
void bubbleSort(int arr[], int n)
{
    bool swapped = false; // to check if swap has taken place or not

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true; // when swap takes place it will be true so that loop should not be breaked
                swap(arr[j], arr[j + 1]);
            }
        }

        if (swapped == false) // if no swap occures after jth first iteration that means the array is sorted as discussed earlier
        {
            break;
        }
    }
}

int main()
{
    int arr[5] = {10, 6, 12, 1, 5};

    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}