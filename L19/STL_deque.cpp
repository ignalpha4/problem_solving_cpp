#include <iostream>
#include <deque> //also known as dequeue or doubly ended queue
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2); // we can push from front and back as well hence its doubly ended queue
    d.push_front(3);
    d.push_back(0);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front(); // we can pop fron front as well as from back

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // accessing elements

    cout << "First index element : " << d[1] << endl;
    cout << "First index element : " << d.at(1) << endl; // two common ways

    d.push_front(3);
    d.push_front(4);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // front back elements

    cout << "Element at front is :" << d.front() << endl;
    cout << "Element at back is :" << d.back() << endl;

    // check for empty

    cout << "deque empty or not ? :" << d.empty() << endl; // will return true(1) if empty else 0(false)

    // erase function

    cout << "Size before deletion :" << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1); // this will delete from beginning to +1 element i.e is first element

    cout << "Size after deletion :" << d.size() << endl;

    cout << "Elements after deletion:" << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}
