#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n, x, cnt = 0;
    while (a>0)
    {
        /* code */
        x = a % 10;
        if (x != 4 && x != 7)
        {
            /* code */
            cnt++;
            break;
        }
        a = a / 10;
    }

    if (cnt==0)
    {
        /* code */
        cout<<"YES";
    }

    else if (cnt!=0 && (n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0))
    {
        /* code */
        cout<<"YES";
    }
    
    else
    {
        cout << "NO";
    }

    return 0;
}