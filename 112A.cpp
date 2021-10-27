#include<bits/stdc++.h>
using namespace std;

int main(){

    string a,b;

    cin>>a;
    cin>>b;

    int i=0;
    int x;
    int y;

    for (i = 0; i < a.length(); i++)
    {
        /* code */
        if (isupper(a[i]))
        {
            /* code */
            a[i]+=32;
        }
        
        x=a[i]-'a';

        if (isupper(b[i]))
        {
            /* code */
            b[i]+=32;
        }
        
        y=b[i]-'a';

        if (x!=y)
        {
            /* code */
            break;
        }

        if (i==((a.length())-1) && x==y)
        {
            /* code */
            cout<<"0";
            break;
        }
            
    }
    
    if (x<y)
    {
        /* code */
        cout<<"-1";
    }
        if (x>y)
        {
            /* code */
            cout<<"1";
        }
    
    return 0;  
}