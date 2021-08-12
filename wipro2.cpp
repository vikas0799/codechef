#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
while(T--)
	{
	int i,n;cin>>n; 
  if(n==1)
    {  int b=0;
      cin>>b;
	if(b>=0)
	 cout<<"YES";
	else
	  cout<<"NO";
    }
	
	
if(n>1)
	{
	int a[n];
	for( i=0;i<n;i++)
	  cin>>a[i];
	int count=0;
	for(i=0;i<n-1;i++)
	{
		  if((a[i+1]-a[i])!=1)
	       { count++;break;   }
    }
    
    if(count==0)
    cout<<"YES";
    else
    cout<<"NO";
}
}
	}
	
	

