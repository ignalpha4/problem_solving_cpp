#include <bits/stdc++.h>
void sort012(int *arr, int n)

{
    // in this approach we a re just storing the number of occurences on 0 1 and 2 and then just adding them to array

    int freq[3] = {0};

    for (int i = 0; i < n; i++)

    {

        if (arr[i] == 0)
            freq[0]++;

        if (arr[i] == 1)
            freq[1]++;

        if (arr[i] == 2)
            freq[2]++;
    }

    int j = 0;

    for (int i = 0; i < 3; i++)

        while (freq[i]-- != 0)
        {

            arr[j] = i;
            j++;
        }
}