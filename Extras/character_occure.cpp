#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "shubham bankar";

    cout << "Enter character to find its occurence" << endl;
    char n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == n)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}