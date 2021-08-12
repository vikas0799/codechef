#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T; double a[T],m;int x,y,i ,h2,h1;cin>>h1>>h2;
	int count1=0,count2=0,j=0;
	for(i=0;i<T;i++)
	{
	     cin>>x>>y;
	     if((x-h1)==0)
	     count1++;
	     if((y-h2==0))
		 count2++;
	     if((x-h1)!=0)
	     { 
		   m=(y-h2)/(x-h1);	
		   a[j]=m;
		   j++;
	     }
	}
	sort(a,a+T-count1-count2); int s=0;
	for(i=0;i<=T-count1-count2;i++)
	{
		if(a[i]!=a[i+1]&&a[i]!=0)
		s++;
	}
	
	if(count1==0&&count2==0)
	cout<<s;
	if(count1>0&&count2>0)
	cout<<s+2;
	if(count1==0&&count2>0)
	cout<<s+1;
	if(count1>0&&count2==0)
	cout<<s+1;
 } 
