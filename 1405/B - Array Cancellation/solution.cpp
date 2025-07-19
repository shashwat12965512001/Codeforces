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
    long long pos = 0;
    long long rem_neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos += arr[i];
        }
        else
        {
            int num = abs(arr[i]);
            if (pos >= num)
            {
                pos -= num;
            }
            else
            {
                rem_neg += num - pos;
                pos = 0;
            }
        }
    }
    cout << rem_neg << '\n';
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
 
    return 0;
}