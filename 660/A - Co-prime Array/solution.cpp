#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
    }
    vector<int> v;
    int moves = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        v.push_back(a);
        if (gcd(a, b) != 1)
        {
            v.push_back(1);
            moves++;
        }
    }
    v.push_back(arr[n - 1]);
    cout << moves << '\n';
    for (int element : v)
    {
        cout << element << " ";
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