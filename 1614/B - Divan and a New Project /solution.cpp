#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }
    vector<int> ans(n);
    sort(v.begin(), v.end());
    long long curr = 1;
    long long temp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[v[i].second] = curr;
        temp += (2 * (v[i].first * abs(curr)));
        if (curr > 0)
        {
            curr *= -1;
        }
        else
        {
            curr *= -1;
            curr++;
        }
    }
    cout << temp << '\n';
    cout << 0 << " ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << '\n';
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