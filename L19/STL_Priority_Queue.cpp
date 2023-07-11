#include <iostream>
#include <queue>
using namespace std;

/*
Priority Queue: A priority queue is a data structure in which elements are arranged based on their priority.
Max-Heap: In a max-heap priority queue, the element with the highest priority (largest value) is at the front of the queue.
Min-Heap: In a min-heap priority queue, the element with the lowest priority (smallest value) is at the front of the queue.
Default Behavior: The default behavior of a priority queue is to use a max-heap implementation.
Max-Heap Creation: To create a max-heap priority queue, no additional steps or custom comparators are required. The default implementation will already create a max-heap.

*/
int main()
{
    // max heap by default
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(3);

    int n = maxi.size();

    cout << "Printing maxi(maxheap): ";
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // front element is accessed using .top()
        maxi.pop();
    }
    cout << endl;

    mini.push(3);
    mini.push(1);
    mini.push(2);
    mini.push(4);

    int m = mini.size();

    cout << "Printing mini(minheap): ";

    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " "; // front element is accessed using .top()
        mini.pop();
    }

    cout << endl;

    cout << "Empty or not : " << mini.empty() << endl; // will be empty bcoz we poped elements while printing

    return 0;
}
