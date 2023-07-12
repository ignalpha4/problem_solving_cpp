#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m; // used to store key value pair
                        // keys are unique and one key points only one value eg: 1->shubham not allowed 1->prajwal
                        // multiple values can be same  1->shubham 2->shubham this is allowed
                        // map is ordered according to their keys
                        // unordered map is similar but is not ordered(is random)

    m[1] = "shubham";
    m[7] = "prajwal";
    m[3] = "pratik";
    m[4] = "dipak";
    // another way of insertion

    m.insert({10, "omkar"});

    // printing the first part i.e keys
    for (auto i : m)
    {
        cout << i.first << " "; // we will get output in ordered manner;
    }
    cout << endl;

    // prinitng the values as well
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    // count to check if key is present or not

    cout << "finding 4 --> " << m.count(4) << endl; // will return true

    // erase

    cout << "After erase: " << endl;

    m.erase(4); // deleting 4 from the map

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // find  returns iterator
    // will implement later

    return 0;
}

// in map time complexity for insert,count,erase,find is log n bcoz it uses  red black or balance tree for implementation
// in unordered map time complexity is O(1) bcoz uses hashtable