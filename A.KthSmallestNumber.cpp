#include <bits/stdc++.h>
using namespace std ;


int main()
{
	int n=5,k=3;
//	cin>>n;
	int a[n]={19,18,20,16,29};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue<int> maxheap;
	
	for(int i=0;i<n;i++){
		maxheap.push(a[i]);
		if(maxheap.size()>k)maxheap.pop();	
	}
	cout<<maxheap.top();
	return 0;
}
