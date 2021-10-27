#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1],b[n+1],ans[n+1];
    ans[0]=0;

    for (int i = 1; i <=n; i++)
    {
        /* code */
        cin>>a[i]>>b[i];
        ans[i]=(ans[i-1]-a[i])+b[i];
    }

    for(int i = 1; i <=n; i++)
    {
       /* code */
       if(ans[0] < ans[i])
       {
           ans[0] = ans[i];
       }
  
    }

    cout<<ans[0];

    return 0;
}