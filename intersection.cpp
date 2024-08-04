#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b)
{
    // Sort both vectors
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Vector to store the intersection
    vector<int> ans;

    // Use set_intersection algorithm
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(ans));

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
