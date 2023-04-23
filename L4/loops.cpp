#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    /*
    1)
    o/p:

    1234
    1234
    1234
    1234



    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    // For reverse use formula (n-j+1)

    2)
    o/p:
     1 2 3
     4 5 6
     7 8 9


    int i = 1;

    int cnt = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << cnt;
            j++;
            cnt++;
        }
        cout << endl;
        i++;
    }

    3) traingle pattern
    o/p:
        *
        * *
        * * *
        * * * *

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    4)
    o/p:
    1
    2 2
    3 3 3
    4 4 4 4


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    5)
    o/p :
    1
    2 3
    4 5 6
    7 8 9 10


    int i = 1;
    int cnt = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= i)
        {
            cout << cnt << " ";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }

    6)
    o/p:
        1
        2 3
        3 4 5
        4 5 6 7


    int i = 1;
    int cnt = 1;
    while (i <= n)
    {
        int j = 1;
        int cnt = i;
        while (j <= i)
        {
            cout << cnt << " ";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }
    7)
    o/p:
    1
    2 1
    3 2 1
    4 3 2 1



    int i = 1;
    int cnt = 1;
    while (i <= n)
    {
        int j = 1;
        int cnt = i;
        while (j <= i)
        {
            cout << cnt << " ";
            cnt--;
            j++;
        }
        cout << endl;
        i++;
    }

    8)
    o/p
    A A A
    B B B
    C C C

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= n)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    9)
    o/p:
    A B C
    D E F
    G H I


    int i = 1;
    int cnt = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + cnt - 1;
            cout << ch << " ";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }
    10)
    o/p:
    A
    B B
    C C C
    D D D D


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }


    11)

    o/p:
    A
    B C
    D E F
    G H I J


    int i = 1;
    int cnt = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 'A' + cnt - 1;
            cout << ch << " ";
            cnt++;
            j++;
        }
        cout << endl;
        i++;
    }
    12)

    D
    C D
    B C D
    A B C D



    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {

            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    13)

    _ _ _ *
    _ _ * *
    _ * * *
    * * * *



    int i = 1;

    while (i <= n)
    {
        // first print space
        int space = n - i;
        while (space)
        {
            cout << " ";

            space--;
        }

        // printing stars
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    */

    return 0;
}