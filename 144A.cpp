#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define minvec(v) min_element(v.begin(), v.end())
#define maxvec(v) max_element(v.begin(), v.end())
#define vecin(v)       \
    for (auto &it : v) \
    cin >> it
#define vecout(v)    \
    for (auto i : v) \
    cout << i << " "
#define fr(i, a, n) for (int i = a; i < n; i++)
typedef vector<int> vi;
typedef vector<ll> vl;
const int MN = 4e5 + 2;
ll arr[MN];

void solve()
{
    int n, s, a[100], i;
    cin >> n;
    int min = n, max = 1;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[max] < a[i])
            max = i;
    }
    for (i = n; i > 0; i--)
    {
        if (a[min] > a[i])
            min = i;
    }
    s = max - 1 + n - min;
    if (min < max)
    {
        s--;
    }
    cout << s;
}
int main()
{
    fast;
    solve();
    return 0;
}