#include <bits/stdc++.h>
using namespace std;

int missing_number(vector<int> &arr)
{
    int n = arr.size();
    int sum = n * (n + 1) / 2;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return sum - ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << missing_number(arr);
}