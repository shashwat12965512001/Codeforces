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
 
bool isPresent(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            return true;
        }
    }
    return false;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 0)
    {
        cout << "YES";
        return;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            v.push_back(i);
        }
    }
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        int num = v[i - 1] + v[i] + 1;
        if (find(v.begin(), v.end(), num) != v.end())
        {
            count++;
        }
    }
    cout << ((count == k) ? "YES" : "NO");
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