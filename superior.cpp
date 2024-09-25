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

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool flag = true; // Assume arr[i] is greater than all elements to its right
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false; // If we find any element greater than or equal to arr[i], break
                break;
            }
        }
        if (flag) // If arr[i] is greater than all elements to its right, increment count
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
