#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> freq; // To store frequency of each character
    char result = '\0';            // The character to be printed
    int maxFreq = 0;               // Max frequency found so far
    int firstPos = s.length();     // First occurrence position of the max frequency character

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++; // Increment frequency of the character

        // Update result if:
        // 1. The current character has a higher frequency.
        // 2. The current character has the same frequency but appeared earlier.
        if (freq[s[i]] > maxFreq || (freq[s[i]] == maxFreq && i < firstPos))
        {
            result = s[i];

            maxFreq = freq[s[i]];

            firstPos = i;
        }
    }

    cout << result;
    return 0;
}
