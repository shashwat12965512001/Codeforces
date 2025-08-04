#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
        if (val % 2 == 1)
        {
            odd++;
        }
    }
    if (odd % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            int count = 0;
            while (arr[i] % 2 == 0)
            {
                arr[i] /= 2;
                count++;
            }
            ans = min(ans, count);
        }
        else
        {
            int count = 0;
            while (arr[i] % 2 != 0)
            {
                arr[i] /= 2;
                count++;
            }
            ans = min(ans, count);
        }
    }
    cout << ans << '\n';
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