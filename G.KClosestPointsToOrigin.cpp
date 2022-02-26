#include <bits/stdc++.h>
using namespace std ;
typedef pair<int,int> pp ;

int main()
{
	int n=4,k=2;
//	cin>>n>>k;
	int a[n][2]={{1,3}, // dis = 10
				{-2,2},       //dis = 8
				{5,8},        //dis = 89
				{0,1}};       // dis = 1
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue <pair<int,pp> > maxheap;
	
	for(int i=0;i<n;i++){
		int dis = pow(a[i][0],2) + pow(a[i][1],2);   // We dont square root the dis to avoid more calculation as dis^2 will also compare simialrly
		maxheap.push({dis,{a[i][0],a[i][1]}});
		if(maxheap.size()>k){
			maxheap.pop();
		}
	}
//	cout<<minheap.top();

	while(!maxheap.empty()){
		cout<<maxheap.top().second.first<<" "<<maxheap.top().second.second<<endl;
		maxheap.pop();
	}
//o/p: {-2,2}, {0,1}

	return 0;
}
