// 1281. Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        product = product * rem;
        sum = sum + rem;
        n = n / 10;
    }

    cout << product - sum << endl;

    return 0;
}