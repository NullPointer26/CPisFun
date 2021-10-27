#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int a = n, x, cnt = 0;
    while (a > 0)
    {
        /* code */
        x = a % 10;
        if (x == 4 || x == 7)
        {
            /* code */
            cnt++;
        }
        a = a / 10;
    }

    if (cnt == 4 || cnt == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}