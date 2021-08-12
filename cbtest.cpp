#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cin>>n;
	int i,j,k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(i<=j||j>=2*n-i)
			{
			if(j<=n)
			{
				if(i<=j)
				cout<<j<<" ";	
			}
			
			if(j>n)
			{  
				if(j>2*n-i)
				 cout<<"chutiya"<<" ";
				 
			}
			cout<<endl;
			
		}
	
		}
	cout<<endl;
		
	}
}
