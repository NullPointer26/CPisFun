#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define yesr {cout<<"YES"<<endl;return;}
#define nor {cout<<"NO"<<endl;return;}
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<int>)
#define PI 3.141592653589793238
#define int long long

typedef long long ll;
typedef long double ld;
// typedef pair<ll,ll> pi;

const int N = 2e5+5;
const int inf = 1e9;
const int inf64 = 1e18;
const int mod = inf + 7;

bool comp(pair<ll,ll> &a,pair<ll,ll> &b)
{
    return (a.ff - a.ss) > (b.ff > b.ss);
}
void solve()
{
    ll n,i,j,k;
    cin>>n;
    ll ans = 0;
    vector<string> s(n);
    f(i,0,n)cin>>s[i];
    for(char c = 'a'; c < 'f'; c++)
    {
        vector<ll> v;
        for(i = 0; i < n; i++)
        {
            ll len = s[i].size();
            for(auto it:s[i])
            {
                if(it == c)len -= 2;
            }
            len *= -1;
            v.pb(len);
        }
        srt(v);
        ll sum = 0;
        for(i = n - 1; i >= 0; i--)
        {
            if(sum + v[i] > 0)
            {
                sum += v[i];
            }
            else
            {
                ans = max(ans, n - i - 1);
                break;
            }
        }
        if(i == -1)
        {
            ans = n;
            break;
        }
    }
    cout<<ans<<"\n";
}
int32_t main()
{
    fast
    ll q=1;
    cin>>q;
    while(q--)solve();
    return 0;
}
