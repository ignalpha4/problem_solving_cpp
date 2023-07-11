#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Shubham");
    s.push("Prajwal");
    s.push("Omkar");

    cout << "Top element in stack is : " << s.top() << endl; // it will be omkar ( last in first out)

    s.pop(); // omkar will be popped as it is the topmost element

    cout << "New topmost element after pop is: " << s.top() << endl; // it will be prjawal bcoz after poping omkar topmost will be prajwal

    cout << "Size of the stack is : " << s.size() << endl; // it will be 2 as there are two elements in stack //prajwal and shubham

    cout << "is stack empty or not : " << s.empty() << endl; // will return 0(false) as it is not empty it has two elements in it

    return 0;
}

// other functions

// stack::swap()    to swap elements of 2 stacks  with same datatype but size may vary