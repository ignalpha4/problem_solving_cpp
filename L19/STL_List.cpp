#include <iostream>
#include <list>

// similar to deque

using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(3);
    l.push_back(4);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size of list: " << l.size() << endl;

    cout << "Element at front is :" << l.front() << endl;
    cout << "Element at back is :" << l.back() << endl;

    // check for empty

    cout << "deque empty or not ? :" << l.empty() << endl; // will return true(1) if empty else 0(false)

    // erase function

    cout << "Size before deletion :" << l.size() << endl;

    l.erase(l.begin()); // this will delete where the iterator will point in this case it is begin() i.e at first index
    // bit different than deque

    cout << "Size after deletion :" << l.size() << endl;

    cout << "Elements after deletion:" << endl;

    for (int i : l)
    {
        cout << i << " ";
    }

    /*

    Some Basic Operations on std::list

    front() – Returns the value of the first element in the list.
    back() – Returns the value of the last element in the list.
    push_front() – Adds a new element ‘g’ at the beginning of the list.
    push_back() – Adds a new element ‘g’ at the end of the list.
    pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
    pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
    insert() – Inserts new elements in the list before the element at a specified position.
    size() – Returns the number of elements in the list.
    begin() – begin() function returns an iterator pointing to the first element of the list.
    end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.

    */

    return 0;
}