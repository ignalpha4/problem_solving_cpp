#include <iostream>
#include <set>
// set is collection of elements
// it will store unique elements only for eg: 1 2 3 2 3 then set will store 1,2,3 only no repeated words
// it uses bst in backend
// no modification of elements only addition and deletion can be performed
// elements are stored in sorted order
// sets are slower than unordered sets
// in unordered sets elements are stored randomly hence are faster

using namespace std;

int main()
{
    set<int> s;

    s.insert(5); // time complexity O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(1);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    // find element

    s.erase(s.begin()); // we need to provide iterator to delete the element

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // to delete further elements
    set<int>::iterator it = s.begin();
    it++; // increment iterator to delete the 2nd element

    s.erase(it);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl; // we will get 2 and 5 after deleting 3 at 2nd position

    // to find element is present or not

    cout << "5 present or not: " << s.count(5) << endl; // if present will return true(1);

    // find function understand in detail further

    return 0;
}