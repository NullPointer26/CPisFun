#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], x[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (i == a[j])
            {
                /* code */
                x[i] = j + 1;
                break;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */
        cout << x[i] << " ";
    }

    return 0;
}