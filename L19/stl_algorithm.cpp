#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // in binary search array/vector must be sorted

    v.push_back(1);
    v.push_back(11);
    v.push_back(16);
    v.push_back(28);
    v.push_back(9);

    cout << binary_search(v.begin(), v.end(), 5) << endl;                    // should return 0 as 5 doesnt exist
    cout << "finding 16: " << binary_search(v.begin(), v.end(), 16) << endl; // will return 1(true)

    cout << "Lower bound : " << lower_bound(v.begin(), v.end(), 16) - v.begin() << endl;
    cout << "upper bound : " << upper_bound(v.begin(), v.end(), 16) - v.begin() << endl;

    int a = 3;
    int b = 5;

    // min max
    cout << "maximum of a and b : " << max(a, b) << endl;
    cout << "minimum of a and b : " << min(a, b) << endl;

    // swap

    swap(a, b);
    cout << "a :" << a << " "
         << "b: " << b << endl;

    // reverse

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << "String after reverse : " << abcd << endl;

    // rotate

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After rotating:" << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // sorting

    // this sort is based on intro sort its combination of heap sort,quick sort and insertion sort
    sort(v.begin(), v.end());

    cout << "After sorting  :" << endl;

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}