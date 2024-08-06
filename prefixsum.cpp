#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> prefix;

    // Calculate the prefix sums for all subarrays
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            prefix.push_back(sum);
        }
    }

    // Print the prefix sums of all subarrays
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }

    return 0;
}
