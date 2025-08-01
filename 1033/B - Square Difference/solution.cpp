#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(long long num)
{
    for (long long i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
void solve()
{
    long long a, b;
    cin >> a >> b;
    long long sum = a + b;
    long long sub = a - b;
    if (((sum * sub) % 2) == 0)
    {
        cout << "NO" << '\n';
        return;
    }
    cout << (isPrime(sum) && (sub == 1) ? "YES" : "NO") << '\n';
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