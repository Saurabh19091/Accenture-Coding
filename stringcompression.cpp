#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        count = 1;
        while (i + 1 < n && s[i] == s[i + 1])
        {
            i++;
            count++;
        }
        ans += s[i] + to_string(count);
    }
    cout << ans;
}