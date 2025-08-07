#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    int num = n / 2;
    cout << num << '\n';
    if (n % 2 == 0)
    {
        for (int i = 0; i < num; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        for (int i = 0; i < num - 1; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
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