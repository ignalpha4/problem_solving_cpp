#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// ali
vector<int> sortListByMiddleDigit(int n, const vector<int> &ids)
{
    // Function to find the middle digit of a number
    auto middleDigit = [](int num) -> int
    {
        string numStr = to_string(num);
        int length = numStr.length();
        int middleIndex = length / 2;
        return numStr[middleIndex] - '0';
    };

    // Comparator function to sort based on the middle digit
    auto compareMiddle = [&middleDigit](int a, int b) -> bool
    {
        return middleDigit(a) < middleDigit(b);
    };

    vector<int> sortedIds(ids); // Copy the input vector

    // Sorting based on the middle digit
    sort(sortedIds.begin(), sortedIds.end(), compareMiddle);

    return sortedIds;
}

int main()
{
    int n;
    cin >> n;

    vector<int> ids(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> ids[i];
    }

    // Call the sorting function
    vector<int> sortedIds = sortListByMiddleDigit(n, ids);

    // Printing the sorted list
    for (int i = 0; i < n; ++i)
    {
        cout << sortedIds[i] << " ";
    }

    return 0;
}