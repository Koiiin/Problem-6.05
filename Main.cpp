#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x;
    cin >> n;
    int a[n+1];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cin >> x >> k;

    for (int i=n-1; i>=(k-1); i--)
    {
        a[i+1] = a[i];
    }
    a[k] = x;

    for (int i=0; i<n+1; i++)
    {
        cout <<a[i] <<" ";
    }

    return 0;
}
