#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;  cin>>n>>m;
	int i,j,k=0;
	
	for(i=n;i<=2*n  ;)
	{       k=k+1;
		for(j=0;j<k;j++)
		{
			cout<<i;
			
		}
		if(k==m)
			break;
		cout<<endl;
		i++;
	}
	   cout<<endl;
	   if(n%2==0)
	   n=n-1;
	 for(i=2*n-1;i>=n; )
	 {
	 	k=k-1;
		for(j=0;j<k&&j<=m;j++)
		{
			cout<<i;
		}
		cout<<endl;
		i--;
	 }
}
