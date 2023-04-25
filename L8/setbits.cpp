#include <bits/stdc++.h>
using namespace std;

int dectobin(int n)
{

    float ans = 0;
    float i = 0;
    while (n != 0)
    {
        float bit = n & 1;
        ans = (bit * pow(10, i)) + ans; // this will store the bits in reverse flow
        n = n >> 1;
        i++;
    }
    return ans;
}
int setbits(int a, int b)
{
    int binarya = dectobin(a);
    int binaryb = dectobin(b);
    int cnt = 0;
    while (binarya != 0)
    {
        int last = binarya % 10;
        if (last == 1)
        {
            cnt++;
        }
        binarya = binarya / 10;
    }

    while (binaryb != 0)
    {
        int last = binaryb % 10;
        if (last == 1)
        {
            cnt++;
        }
        binaryb = binaryb / 10;
    }

    return cnt;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << "answer is :" << setbits(a, b) << endl;
    return 0;
}
