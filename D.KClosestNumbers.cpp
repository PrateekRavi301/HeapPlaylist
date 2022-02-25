#include <bits/stdc++.h>
using namespace std ;


int main()
{
	int n=5,k=3,x=7;
//	cin>>n;
	int a[n]={5,6,7,8,9};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue <pair<int,int>> maxheap;
	
	for(int i=0;i<n;i++){
		int val = abs(x-a[i]);
		maxheap.push({val,a[i]});
		if(maxheap.size()>k){
			maxheap.pop();
		}	
	}
//	cout<<minheap.top();

	while(!maxheap.empty()){
		cout<<maxheap.top().second<<" ";
		maxheap.pop();
	}


	return 0;
}
