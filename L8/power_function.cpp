#include <bits/stdc++.h>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}

int main()
{

    int answer = power();
    cout << "Answer is:" << answer << endl;

    answer = power();
    cout << "Answer  is:" << answer << endl;

    answer = power();
    cout << "Answer  is:" << answer << endl;

    return 0;
}
/* A function is a set of statements that take inputs, do some specific computation, and produce output.
 The idea is to put some commonly or repeatedly done tasks together and make a function so that instead of
 writing the same code again and again for different inputs, we can call the function.
In simple terms, a function is a block of code that only runs when it is called.*/