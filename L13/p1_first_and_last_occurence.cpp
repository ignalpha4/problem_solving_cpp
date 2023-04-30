#include <bits/stdc++.h>
using namespace std;
// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbVRHRmdQNGFBcTE4am00N2phcmtxQzJ1eHJPd3xBQ3Jtc0ttM182U3JBSE9jUmF5WEd3bU1HdDMxRVJEQTZzb1JZZU43ZU9KdVlnUFc2aldxcFpjQTVYRzBoYkEzWjVnX215NHItYU5tZlhrdE81ZkYzYUdPZEx2Ti00a0NkMnBfN0RLTEtzUWk0VWdZMmxzRElSVQ&q=https%3A%2F%2Fbit.ly%2F3Ioexjh&v=zD2Jg3alZV8

// similar to that of binary search only for first occurence when we find the element we will search to left of it for any other occurence of it
// as we are finding the first occurence if there is element we will dfind it ans this will be our new ans else the previously found element will be ans

int first_occ(vector<int> &arr, int n, int k)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid; // we will store the ans value in ans variable so that if we find other element left to it we can update it

            end = mid - 1; // we will point end to mid -1 so that the keft part will be traversed
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
// we will chech to right for any more occurence of that letter as we are finding the last occurence of element
int last_occ(vector<int> &arr, int n, int k)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1; // so that right part is traversed
        }
        else if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p; // using pairs to store first and last occurence
    p.first = first_occ(arr, n, k);
    p.second = last_occ(arr, n, k);

    return p;
}

int main()
{
    vector<int> arr = {5, 6, 7, 7, 7, 7, 7, 7, 7, 9, 10};

    pair<int, int> ans = firstAndLastPosition(arr, 11, 7);

    cout << ans.first << " " << ans.second << endl;
    return 0;
}

// NOTE:using this method we can find number of occurence of that element as well
// using formula no_of_occurence=(last_index-first_index)+1;