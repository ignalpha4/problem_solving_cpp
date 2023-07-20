#include <bits/stdc++.h>
using namespace std;
/*  here there are two arrays a1=[1,3,5,7,9] a2=[2,4,6]
    we need to merge this two arrays and form a3=[1,2,3,4,5,6,7,9] as output after merge
*/

// we have used two pointer i and j to solve the question
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr3[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[3] = {2, 4, 6};

    int arr3[8];

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}

/*
leetcode:https://leetcode.com/problems/merge-sorted-array/

q)You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored.
nums2 has a length of n.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                k--;
                i--;
            } else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};


*/