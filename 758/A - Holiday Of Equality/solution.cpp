#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        large = max(large, arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(large - arr[i]);
    }
    cout << sum;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    //     solve();
    // }
 
    solve();
 
    return 0;
}