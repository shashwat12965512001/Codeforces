#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> T, M;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            T.push_back(i);
        }
        else
        {
            M.push_back(i);
        }
    }
    bool ans = true;
    if (T.size() != (M.size() * 2))
    {
        ans = false;
    }
    else
    {
        int x = M.size();
        for (int i = 0; i < x; i++)
        {
            if (!(T[i] < M[i] && M[i] < T[i + x]))
            {
                ans = false;
            }
        }
    }
    cout << (ans ? "YES" : "NO") << '\n';
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