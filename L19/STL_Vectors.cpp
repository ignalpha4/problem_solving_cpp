#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    // capacity means actual size of vector
    // size means number of elements present in vector

    cout << "Capacity:" << v.capacity() << endl;

    v.push_back(10);

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(20);

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(30);

    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(40);

    cout << "Capacity: " << v.capacity() << endl;

    // whenever we add elements in vector if its more than its capacity it will double its capacity

    // size will be the number of elements present in vector

    cout << "size of vector is (number of elements present): " << v.size() << endl;

    // if we premove one element its capacity will be same the number of elements will change

    v.pop_back(); // removes element from back

    cout << "Capacity: " << v.capacity() << endl;

    cout << "size of vector is (number of elements present) : " << v.size() << endl;

    // Another way of of creating a vector

    vector<int> vect1(5);    // creates vector of size 5
    vector<int> vect2(5, 1); // creates vector of size 5 and initializes all values to 1

    vector<int> copyvector(v); // all elements of vector v will be copied in copyvector

    // printing vector

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}
