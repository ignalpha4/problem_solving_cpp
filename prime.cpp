#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int f = 0;
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << "Not prime" << endl;
    }
    else
    {
        cout << "Prime" << endl;
    }

    return 0;
}