#include<bits/stdc++.h>
using namespace std;
int main()
{
		int T; cin>>T;
	while(T--)
	{
	    int n,d;cin>>n>>d; int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	     int count1=0,count2=0;
	     for(int i=0;i<n;i++)
	     {
	     	if(a[i]>=80||a[i]<=9)
	     	 count1++;
	     	 else
	     	 count2++;
		 }
		 
		 if(count1%d==0&&count2%d==0)
		 cout<<count1/d+count2/d<<endl;
		 else
		    if(count1%d==0||count2%d==0)
		    cout<<count1/d+count2/d+1<<endl;
		    else
		    cout<<count1/d+count2/d+2<<endl;
	    
	}
}
