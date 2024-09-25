#include <bits/stdc++.h>
using namespace std;

int digitsum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem * rem;
        n = n / 10;
    }
    return sum;
}
bool isone(int n)
{
    while (n != 1 && n != 4)
    {
        n = digitsum(n);
    }
    return n == 1;
}

int main()
{
    int n;
    cin >> n;
    cout << isone(n) << endl;
}