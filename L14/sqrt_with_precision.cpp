#include <bits/stdc++.h>
using namespace std;

long long int binary_search(long long int N)
{
    int s = 0;
    int e = N;

    long long int mid = s + (e - s) / 2;

    long long int ans = -1;
    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == N)
        {
            return mid;
        }
        if (square < N) // if true we check in right part and store ans
        {
            ans = mid;
            s = mid + 1;
        }
        else // when sqaure>N we check in left part
        {

            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

double more_precision(int n, int precision, int tempSol) // precision is the numbers after point for eg: 1.023 this has precision till 3 numbers adter decimal
{
    double factor = 1;
    double ans = tempSol; // storing the tempsol in double as int cannot be ans

    for (int i = 0; i < precision; i++) // loop for precision
    {
        factor = factor / 10; // this will update factor first 0.1 the 0.01 then 0.001 and so on

        for (double j = ans; j * j < n; j = j + factor) // inser loop to check if jsquare is less than ans we will store till it is true
        {
            ans = j;
        }
    }

    return ans;
}

int main()
{

    int x;
    cin >> x;

    int tempSol = binary_search(x);

    cout << " Answer is " << more_precision(x, 3, tempSol) << endl;

    return 0;
}
