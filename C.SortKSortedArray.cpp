#include <bits/stdc++.h>
using namespace std ;


int main()
{
	int n=7,k=4;
//	cin>>n;
	int a[n]={6,5,3,2,8,10,9};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue<int , vector<int>, greater <int> > minheap;
	
	int id =0;
	for(int i=0;i<n;i++){
		minheap.push(a[i]);
		if(minheap.size()==k){
			a[id] = minheap.top();
			id++;
			minheap.pop();
		}	
	}
//	cout<<minheap.top();
	while(minheap.size()>0){
		a[id] = minheap.top();
		id++;
		minheap.pop();
	}
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
