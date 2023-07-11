#include <iostream>
#include <queue>
// FIFO
using namespace std;

int main()
{
    queue<string> q;

    q.push("Shubham");
    q.push("prajwal");
    q.push("Omkar");

    cout << "Size before pop operation: " << q.size() << endl;

    cout << "First/front Element is :" << q.front() << endl; // will be shubham as it is first enetered in queue

    q.pop();

    cout << "First/front Element after pop is :" << q.front() << endl; // will be prajwal as after removal of shubham he will be first in order

    cout << "Size after pop operation : " << q.size() << endl;

    cout << "is empty or not : " << q.empty() << endl;

    return 0;
}
// other functions

// queue::swap()  eg: q1.swap(q2)	Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.