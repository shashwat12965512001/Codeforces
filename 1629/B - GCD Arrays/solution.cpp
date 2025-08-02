#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    if (l == r)
    {
        if (l == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
        return;
    }
    int odd = (r - l) + 1;
    if (odd % 2 == 1)
    {
        odd /= 2;
        if ((l % 2) == 1 || (r % 2) == 1)
        {
            odd++;
        }
    }
    else
    {
        odd /= 2;
    }
    cout << ((odd <= k) ? "YES" : "NO") << '\n';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
 
    // solve();
 
    return 0;
}