#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    long long sum = 0;
    long long count = 0;
    bool flag = false;
    for (int i = 1; i <= n - 1; i++)
    {
        sum += arr[i];
        if (arr[i] > 0)
        {
            flag = true;
        }
        if (arr[i] == 0 && flag)
        {
            count++;
        }
    }
    cout << sum + count << '\n';
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