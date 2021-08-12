#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
			
			sort(a,a+n);
		int count=0;
		if(n==1)
		cout<<"YES"<<endl;
		if(n>1)
		{
		for(i=0;i<n-1;i++)
		{
			if((a[i+1]-a[i])>1)
			count++;
			if(count==1)
			break;
		}
		
		if(count==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}}
}
