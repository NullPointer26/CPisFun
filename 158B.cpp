#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll a = 0, b = 0, c = 0, d = 0, cnt = 0;
    ll x[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x[i];

        if (x[i] == 1)
        {
            a++;
        }
        else if (x[i] == 2)
        {
            b++;
        }
        else if (x[i] == 3)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    // for 4
    cnt += d;

    // for 3
    if (c < a)
    {
        /* code */
        cnt += c;
        a -= c;
        c = 0;
    }
    else if (c >= a)
    {
        /* code */
        cnt += a;
        c -= a;
        a = 0;
    }
    if (c > 0)
    {
        /* code */
        cnt += c;
        c = 0;
    }

    // for 2
    if (b > 0)
    {
        /* code */
        cnt += b / 2;
        b = b % 2;
    }

    // for left 1 & 2
    ll left = a + (b * 2);
    cnt += ceil(1.00 * left / 4);

    cout << cnt;

    return 0;
}