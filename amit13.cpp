#include<bits/stdc++.h>
using namespace std; //factor n
int main()
{
	int n;cin>>n;
	if(n%2!=0)
	{ for(int i=1;i<n/2;i=i+2)
	      if(n%i==0)
	      cout<<i;
	}
	else
	 for(int i=1;i<=n/2;i++)
	 if(n%i==0)
     cout<<i;
}
