#include <bits/stdc++.h>
using namespace std;

bool isfile(string &s, int &version)
{
    if (s.length() < 6 || s.substr(0, 5) != "File ")
    {
        return false;
    }
    string versionstr = s.substr(5);

    for (char c : versionstr)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    version = stoi(versionstr);

    return true;
}
int validate(vector<string> &s)
{
    int count = -1;

    for (auto i : s)
    {
        int version;
        if (isfile(i, version))
        {
            count = max(count, version);
        }
    }
    return count;
}
int main()
{
    vector<string> s = {"dataFile 1", "dataFile 2", "dataFile 3", "File"};

    cout << validate(s);
}