#include <bits/stdc++.h>
using namespace std ;
typedef pair<int,int> pp ;

ksmallest(int n,int a[],int k){
	priority_queue<int> maxheap;
	for(int i=0;i<n;i++){
		maxheap.push(a[i]);
		if(maxheap.size()>k){
			maxheap.pop();
		}
	}
	return maxheap.top();
}

int main()
{
	int n=5,k1=3,k2=5;
//	cin>>n>>k1>>k2;
	int a[n]={1,2,3,4,5};
//	for(int i=0;i<n;i++)cin>>a[i];
	
	int x = ksmallest(n,a,k1);
	int y = ksmallest(n,a,k2);

	int sum=0;
	
	for(int i=0;i<n;i++){
		if(a[i]>x && a[i]<y){
			sum+=a[i];
		}
	}
	cout<<sum<<endl;
	return 0;
}
