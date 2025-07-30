#include <bits/stdc++.h>
 
using namespace std;
 
bool isLucky(int n)
{
    int num = n;
    while (num != 0)
    {
        int val = num % 10;
        if (val != 4 || val != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}
 
void solve()
{
    int n;
    cin >> n;
    if (isLucky(n))
    {
        cout << "YES";
        return;
    }
    if (((n % 4) == 0) || ((n % 7) == 0))
    {
        cout << "YES";
        return;
    }
    int i = 44;
    int x = 37;
    int y = 330;
    while (i < n)
    {
        if (n % i == 0) // 44
        {
            cout << "YES";
            return;
        }
        i += 3;
        if (n % i == 0) // 47
        {
            cout << "YES";
            return;
        }
        i += 27;
        if (n % i == 0) // 74
        {
            cout << "YES";
            return;
        }
        i += 3;
        if (n % i == 0) // 77
        {
            cout << "YES";
            return;
        }
        x += y;
        y *= 10;
        i += x;
    }
    cout << "NO";
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