#include <bits/stdc++.h>
using namespace std;

int second_lar(vector<int> &arr)
{

    int n = arr.size();
    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max1)
        {
            max2 = max(max2, arr[i]);
        }
    }

    return max2;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 6};
    cout << second_lar(arr) << endl;
}