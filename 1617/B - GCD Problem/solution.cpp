#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int a, b, c;
    c = 1;
    a = b = (n - 1) / 2;
    a += (n - 1) % 2;
    if (a == b)
    {
        do
        {
            a++;
            b--;
        } while (a % 2 == 0 && b % 2 == 0);
    }
    cout << a << " " << b << " " << c << '\n';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}