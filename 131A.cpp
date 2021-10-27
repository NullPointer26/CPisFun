#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (isupper(s[i]))
        {
            /* code */
            cnt++;
        }
    }

    if (cnt == s.length())
    {
        /* code */
        for (int i = 0; i < s.length(); i++)
        {
            /* code */
            s[i] += 32;
        }
        cout << s;
        return 0;
    }
    else if (cnt == s.length() - 1 && islower(s[0]))
    {
        /* code */
        s[0] -= 32;
        for (int i = 1; i < s.length(); i++)
        {
            /* code */
            s[i] += 32;
        }
        cout << s;
        return 0;
    }
    else
    {
        /* code */
        cout << s;
    }

    return 0;
}