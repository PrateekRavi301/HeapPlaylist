#include <bits/stdc++.h>
using namespace std ;
typedef pair<int,int> pp ;

int main()
{
	int n=7,k=2;
//	cin>>n>>k;
	int a[n]={4,3,4,5,3,4,7};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue <pp,vector<pp>,greater<pp> > minheap;
	
	unordered_map<int,int> mp;
	
	for(int i=0;i<n;i++)mp[a[i]]++;
	
	for(auto i=mp.begin();i!=mp.end();i++){
		minheap.push({i->second,i->first});
		if(minheap.size()>k){
			minheap.pop();
		}	
	}
//	cout<<minheap.top();

	while(!minheap.empty()){
		cout<<minheap.top().second<<" ";
		minheap.pop();
	}


	return 0;
}
