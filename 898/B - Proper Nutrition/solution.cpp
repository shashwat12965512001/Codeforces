#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long x, y;
    x = -1;
    y = 0;
    for (y = 0; y <= 1e7; y++)
    {
        long long num = (n - y * b);
        if (num % a == 0 && num >= 0)
        {
            x = num / a;
            break;
        }
    }
    if (x == -1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << '\n';
        cout << x << " " << y;
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
 
    solve();
 
    return 0;
}