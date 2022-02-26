#include <bits/stdc++.h>
using namespace std ;
typedef pair<int,int> pp ;

int main()
{
	int n=5;
//	cin>>n;
	int a[n]={1,2,3,4,5};   // Cost = sum of lengths of both the ropes
//	for(int i=0;i<n;i++)cin>>a[i];
	
	priority_queue <int,vector<int> ,greater<int> > minheap;
	
	for(int i=0;i<n;i++){
		
		minheap.push(a[i]);
	}
//	cout<<minheap.top();

	int cost=0;
	while(minheap.size()>=2){
		int a = minheap.top();
		minheap.pop();
		int b = minheap.top();
		minheap.pop();
		cost+=a+b;
		minheap.push(a+b);
	}
//o/p: 33
  //Explanation: minheap: 1,2,3,4,5 cost = 0
//                  cost = 3 minheap : 3,3,4,5 as we pop 1,2 and push thier sum
//                    cost = 3+6 minheap : 4,5,6
//                      cost = 3+6+9 minheap : 6,9
//                        cost = 3+6+9+15 minheap:15..........Terminate loop
	cout<<cost<<endl;
	return 0;
}
