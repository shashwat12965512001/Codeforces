#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
 
    int count = 0;
    for (int i = 0; i <= n - k;)
    {
        bool can_hike = true;
        for (int j = 0; j < k; ++j)
        {
            if (a[i + j] != 0)
            {
                can_hike = false;
                break;
            }
        }
 
        if (can_hike)
        {
            count++;
            i += k + 1; // hike + 1 rest day
        }
        else
        {
            i++; // try next day
        }
    }
 
    cout << count << "\n";
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