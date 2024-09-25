#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ok = 0;
    int k = n;

    while (k != 1)
    {

        int rem = k % 10;
        ok += rem * rem;
        k = k / 10;

        if (k <= 0)
        {
            k = ok;
        }
    }
    if (k == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}