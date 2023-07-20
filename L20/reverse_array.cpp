#include <bits/stdc++.h>
using namespace std;
// reverse array from point m

// codingninja : https://www.codingninjas.com/studio/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTab=0
void reverseArray(vector<int> &arr, int m)
{
    int s = m;
    int e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    reverseArray(v, 1);

    return 0;
}