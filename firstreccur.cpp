#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    for (auto c : s)
    {
        if (st.count(c))
        {
            cout << c;
        }
        st.insert(c);
    }
}