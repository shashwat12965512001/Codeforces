#include <bits/stdc++.h>
 
using namespace std;
 
int hourToMin(int h, int m, int H, int M)
{
    int start = (H * 60) + M;
    int end = (h * 60) + m;
    int time = end - start;
    return (time < 0) ? (time + (24 * 60)) : time;
}
 
void solve()
{
    int n, H, M;
    cin >> n >> H >> M;
    int less = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        int diff = hourToMin(h, m, H, M);
        less = min(less, diff);
    }
    cout << (less / 60) << " " << (less % 60) << '\n';
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