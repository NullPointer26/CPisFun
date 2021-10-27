/*====================================
Auther:    Shyam Makwana
Problem:   TheMarried-UnmarriedRiddle.cpp
====================================*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int


int32_t main()
{
	int n,m,a,test;
	cin>>test;	
	while(test--)
	{
		cin>>n;

		vector<vector<int> > v(n);
		priority_queue<int, vector<int> , greater<int> > pq;
		int ans=0;

		for(int i=0;i<n;i++)
		{
			cin>>m;
			for(int j=0;j<m;j++)
			{
				cin>>a;
				v[i].push_back(a);
			}
		}

		for(int i=0;i<n;i++)
		{
			int start=0,end=v[i].size()-1;
			int begcut=-1,endcut=v[i].size();
			int cost=0;
			

			while(start<end)
			{
				if(v[i][start]>v[i][start+1])
				{
					int cut_sz=min(start-begcut,endcut-(start+1));
					pq.push(cut_sz);
					cost+=cut_sz;
					begcut=start;
					start++;
				}

				else if(v[i][end]<v[i][end-1])
				{
					int cut_sz=min(endcut-end,(end-1)-begcut);
					pq.push(cut_sz);
					cost+=cut_sz;
					endcut=end;
					end--;
				}
				else
				{
					start++;
					end--;
				}				
			}
			if((endcut-begcut-1) != 0)
				pq.push(endcut-begcut-1);
			ans+=cost;
			cout<<cost<<endl;
		}
		// cout<<ans<<endl;
		
	    // for(auto it : cuts){
	    // 	pq.push(it);
	    // }	    
	    // while(pq.size() > 1){
	    // 	int m1 = pq.top();
	    // 	pq.pop();
	    // 	int m2 = pq.top();
	    // 	pq.pop();
	    // 	ans += (m1 + m2);
	    // 	// cout<<m1+m2<<endl;
	    // 	pq.push(m1+m2);
	    // }
	    while(!pq.empty())
	    {
	    	cout<<pq.top()<<endl;
	    	pq.pop();

	    }
	    cout<<ans<<endl;
	}
}