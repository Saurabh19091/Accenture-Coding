#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b)
{
    unordered_set<int> setA(a.begin(), a.end());
    vector<int> ans;
    for (int num : b)
    {
        if (setA.find(num) != setA.end())
        {
            ans.push_back(num);
            setA.erase(num); // to avoid duplicates in the answer
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> ans = intersection(a, b);

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
