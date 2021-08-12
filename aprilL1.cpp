#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;	
		cin>>n;
		int count=0 ,  a[n], i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
			for(i=0;i<n;i++)
		{
			if(a[i]==1)
			count++;
		}
		
		if(n/6>=count-1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
