#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;
// typedef pair<ll,ll> pi;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);srand(time(NULL));
#define vec vector<ll>
#define pb push_back
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define f(i,a,b) for(i=a;i<b;i++)
#define rf(i,n,a) for(int i=n ; i>=a ; i--)
#define all(v) v.begin(),v.end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.begin(),v.end(),greater<int>())
#define PI 3.141592653589793238
// #define int long long int

const ll N = 2e5+5;
const ll inf = 1e9;
const ll inf64 = 1e18;
const ll mod = inf + 7;

using namespace std;

void solve()
{
    ll n,m,i,j;
    cin >> n >> m;
    vector<int> ans(n,-1);
    vector<int> v1(m);
    set<pair<int,int>> s;
    for(int i=0;i<m;i++)
        cin >> v1[i];
    for(int i=0;i<m;i++)
    {
        int k;
        cin >> k;
        s.insert({k,v1[i]-1});
    }
    while(s.size()>0)
    {
        auto it = *s.begin();
        s.erase(s.begin());
        if(ans[it.second]==-1)
        {
            ans[it.second] = it.first;
            if(it.second+1<n && ans[it.second+1]==-1)
                s.insert({it.first+1,it.second+1});
            if(it.second-1>=0 && ans[it.second-1]==-1)
                s.insert({it.first+1,it.second-1});
        }
    }
    for(auto it:ans)
        cout << it << " ";
    cout << endl;
}
int32_t main()
{
    fast
    ll q=1;
    cin>>q;
    while(q--)solve();
    return 0;
}
