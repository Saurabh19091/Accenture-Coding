#include <bits/stdc++.h>
using namespace std;
bool compa(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (char c : s)
    {
        mp[c]++;
    }
    vector<pair<char, int>> pa(mp.begin(), mp.end());
    sort(pa.begin(), pa.end(), compa);

    string ans = "";
    for (auto i : pa)
    {
        for (int j = 0; j < i.second; j++)
        {
            ans += i.first;
        }
    }
    cout << ans;
}