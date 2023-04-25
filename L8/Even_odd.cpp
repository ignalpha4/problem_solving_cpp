#include <bits/stdc++.h>
using namespace std;

void evenodd(int a) // we can also create a bool func
{
    if (a % 2 == 0) // we can also use a&0 to chech even
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    evenodd(n);

    return 0;
}