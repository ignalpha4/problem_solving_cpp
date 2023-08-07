#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "robbor";

    int j = s1.size() - 1;
    int i = 0;
    int flag = 0;
    while (i < j)
    {
        if (s1[i] != s1[j])
        {
            flag = 1;
        }
        i++;
        j--;
    }

    if (flag == 1)
    {
        cout << "Not a palindrome" << endl;
    }
    else
    {
        cout << "its a palindrome" << endl;
    }

    return 0;
}