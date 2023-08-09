// Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    /*-----approach 1---------------
       int sum = 0;

       for (int i = n1; i <= n2; i++)
       {
           sum = sum + i;
       }

       cout << sum << endl;
   */

    // Approach 2 :using Formula  y*(y+1)/2 – x*(x+1)/2 + x

    int sum = n2 * (n2 + 1) / 2 - (n1 * (n1 + 1) / 2) + n1;

    cout << sum << endl;

    return 0;
}
