#include <iostream>
#include <string>

bool isPalindrome(const std::string &s)
{
    int l = 0;
    int r = s.length() - 1;

    while (l < r)
    {
        if (s[l++] != s[r--])
        {
            return false;
        }
    }
    return true;
}

std::string longestPalindromicSubstring(const std::string &s)
{
    std::string longest = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j <= s.length(); j++)
        {
            std::string substr = s.substr(i, j - i);
            if (isPalindrome(substr))
                if (substr.length() > longest.length())
                {
                    longest = substr;
                }
        }
    }
    return longest;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << longestPalindromicSubstring(s) << std::endl;
    return 0;
}