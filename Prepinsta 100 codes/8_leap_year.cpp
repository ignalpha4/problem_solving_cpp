// check whether the year is leap year or not

/*

Condtions for Leap Year Following are the rules to predict if a given is a year leap or not. If any one of the conditions below is met then it's a leap year -
1. If a year is divisible by 400, it's a leap year.
2. If a year is divisible by 4 but not by 100 then its leap year

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Approach 1  : if-else

    // if (n % 400 == 0) // can write in one if -else as well like if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    // {
    //     cout << "Leap year" << endl;
    // }
    // else if (n % 4 == 0 && n % 100 != 0)
    // {
    //     cout << "Leap year" << endl;
    // }
    // else
    // {
    //     cout << "Not a leap year" << endl;

    // Approach 2 : ternary operator

    int flag = (n % 100 == 0 || (n % 4 == 0 && n % 100 != 0)) ? 1 : 0;

    if (flag == 1)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}