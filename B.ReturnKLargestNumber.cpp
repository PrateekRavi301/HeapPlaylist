#include <bits/stdc++.h>
using namespace std ;


int main()
{
	int n=5,k=3;
//	cin>>n;
	int a[n]={19,18,20,16,29};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue<int, vector<int> ,greater <int> > minheap;
	
	for(int i=0;i<n;i++){
		minheap.push(a[i]);
		if(minheap.size()>k)minheap.pop();	
	}
//	cout<<minheap.top();
	while(minheap.size()>0){
		cout<<minheap.top()<<" ";
		minheap.pop();
	}
	return 0;
}
