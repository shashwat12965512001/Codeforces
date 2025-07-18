#include <bits/stdc++.h>
 
using namespace std;
 
int mex(vector<int> arr)
{
    int size = arr.size();
    if (size == 0)
    {
        return 0;
    }
    int high = INT_MIN;
    for (int num : arr)
    {
        high = max(high, num);
    }
    bool isPresent[high + 1] = {false};
    for (int i = 0; i < size; i++)
    {
        isPresent[arr[i]] = true;
    }
    for (int i = 0; i <= high; i++)
    {
        if (!isPresent[i])
        {
            return i;
        }
    }
    return high + 1;
}
 
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int index = -1;
    vector<int> A;
    vector<int> B;
    A.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff == 1)
        {
            A.push_back(arr[i]);
        }
        else if (diff > 1)
        {
            index = i;
            break;
        }
        else
        {
            B.push_back(arr[i]);
        }
    }
    if (index != -1)
    {
        for (int i = index; i < n; i++)
        {
            B.push_back(arr[i]);
        }
    }
    int a = mex(A);
    int b = mex(B);
    cout << (a + b) << '\n';
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