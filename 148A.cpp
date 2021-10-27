#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int k, l, m, n, x;
    cin >> k >> l >> m >> n >> x;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        /* code */
        cout << x;
        return 0;
    }

    int a[x + 1] = {0};
    for (int i = 1; i <= x; i++)
    {
        /* code */
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            /* code */
            a[i]++;
        }
    }

    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        /* code */
        if (a[i] != 0)
        {
            /* code */
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}