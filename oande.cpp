#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n;
    }
    else if (n % 2 == 0)
    {
        cout << floor((n - 2) / 2);
    }
    else if (n % 2 != 0)
    {
        cout << floor((n) / 2);
    }
}