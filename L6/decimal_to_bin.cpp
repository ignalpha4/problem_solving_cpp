#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
    1.by dividing by 2 and storing the remainder
    int n;
    cin >> n;

    int bin[32];  //32 bit array to store the bits

    int i = 0;

    while (n > 0)
    {
        bin[i] = n % 2;    //will return 1 0r 0 and will be stored in array (get remainder)
        n = n / 2;         //to divide it by 2
        i++;               //increment i that is index of array
                           //The ans will be in ascending order we need to print reverse array
    }


    for (int j = i - 1; j >= 0; j--)    //i is number of elements in array we are traversing array in reverse order
    {
        cout << bin[j];
    }


    // using same approach of divide by 2 but storing the ans in float

    int n;
    cin >> n;

    float ans = 0; // 32 bit array to store the bits

    int i = 0;

    while (n != 0)
    {
        int rem = n % 2;
        ans = (rem * pow(10, i)) + ans; //this will store in reverse flow
        n = n / 2;
        i++;
    }
    cout << ans << endl;

*/

    // method 2 : using bitwise & and right shift
    // Note:use float will not work for int

    int n;
    cin >> n;

    float ans = 0;
    float i = 0;
    while (n != 0)
    {
        float bit = n & 1;
        ans = (bit * pow(10, i)) + ans; // this will store the bits in reverse flow
        n = n >> 1;
        i++;
    }
    cout << "in binary:" << ans << endl;

    return 0;
}

/*
Formulas:

1) Same Flow
i/p:123  o/p:123
ans=(ans*10)+digit

2) reverse flow
i/p:123 o/p:321
ans=(digit*pow(10,i))+ans

*/