#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

string containsAllDigits(const string &input_str)
{
    // Create an unordered set to keep track of the unique digits encountered
    unordered_set<char> unique_digits;

    // Loop through each character in the input string
    for (char c : input_str)
    {
        // Check if the character is a digit (0-9)
        if (isdigit(c))
        {
            // Add the digit to the set
            unique_digits.insert(c);
        }
    }

    // Check if the set of unique digits contains all digits (0-9)
    if (unique_digits.size() == 10)
    {
        return "True";
    }
    else
    {
        return "False";
    }
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string input;
        cin >> input;
        cout << containsAllDigits(input) << endl;
    }

    return 0;
}