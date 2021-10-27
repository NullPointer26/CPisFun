#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k,i,score=0,ans=0;
    int a[50];

    cin>>n>>k;

    for ( i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }

    score=a[k-1];

    for ( i = 0; i < n; i++)
    {
        /* code */

        if (a[i]>=score && a[i]>=1)
        {
            /* code */
            ans++;
        }
        
    }
    cout<<ans<<endl;

    return 0;
}