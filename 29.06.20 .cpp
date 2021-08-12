#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
long long int i,x,y,n,k;
	  cin>>x>>y>>n;
	int t;
	t=n/x;
	k=t*x+y;
	if(k>n)
	cout<<k-x<<endl;
	if(k<=n)
	cout<<k<<endl;
	 }
}


