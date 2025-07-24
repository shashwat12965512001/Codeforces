#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
void solve()
{
    int n;
    cin >> n;
    int square = n * 2;
    if (!isPrime(n) && !isPrime(square))
    {
        cout << (square) << " " << n;
    }
    else
    {
        while (isPrime(square) || isPrime(square - n))
        {
            square++;
        }
        cout << square << " " << (square - n);
    }
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