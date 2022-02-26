#include <bits/stdc++.h>
using namespace std ;
typedef pair<int,int> pp ;

int main()
{
	int n=7,k=2;
//	cin>>n>>k;
	int a[n]={4,3,4,5,3,4,7};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue <pp > maxheap;
	
	unordered_map<int,int> mp;
	
	for(int i=0;i<n;i++)mp[a[i]]++;
	
	for(auto i=mp.begin();i!=mp.end();i++){
		maxheap.push({i->second,i->first});	
	}
//	cout<<minheap.top();

	while(!maxheap.empty()){
		int count = maxheap.top().first;
		while(count--){
			cout<<maxheap.top().second<<" ";
		}
		maxheap.pop();
	}
//If Maxheap taken, then o/p : {4,4,4,3,3,5,7};
  //IF Minheap taken, then o/p : {5,,7,3,3,4,4,4};

	return 0;
}
