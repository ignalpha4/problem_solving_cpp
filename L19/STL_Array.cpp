#include <iostream>
#include <array>
using namespace std;

int main()
{

    // normal array      int arr[4]={1,2,3,4};

    // size of normal array
    // n=sizeof(arr)/sizeof(int) ;   this will give size of array in bytes so for eg array has 4
    // elements the sizeof will give 16 divided by sizeof int 4 bytes  (16/4) =4;

    // STL array

    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // other operations

    cout << "element at index:" << arr.at(2) << endl;

    cout << "is array empty:" << arr.empty() << endl;

    cout << "element at front of array:" << arr.front() << endl;

    cout << "element at back of array:" << arr.back() << endl;

    return 0;
}