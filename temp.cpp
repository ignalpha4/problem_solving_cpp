#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int alice_score = min(min(a1, a2), a3) - (a1 + a2 + a3);

        int bob_score = min(min(b1, b2), b3) - (b1 + b2 + b3);

        if (alice_score > bob_score)
        {
            cout << "Alice" << endl;
        }
        else if (bob_score > alice_score)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
