#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int x=1,y=2,p=4,z=0;
int fabb(int t)
{  
	if(t==0)
	return z;
    z=x+y+p; // cout<<z<<" ";   
    x=y;y=p;p=z;
   return fabb(t-1);
}
int main()
{ int T; cin>>T;
    while(T--)
    {
	
	int n,k; cin>>n;
	if(n==1)   cout<<x<<endl;
	if(n==2)   cout<<y<<endl;
	if(n==3)    cout<<p<<endl;
	if(n>3)
	{
	n=n-3;
	k= fabb(n);
	cout<<k<<endl;
	}
}
}
