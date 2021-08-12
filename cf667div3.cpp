#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
		int a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		
		
		if((a-x)>>n&&(b-y)>>n&&a-n>=b-n)
		 cout<<(a*(b-n))<<endl;
		 if((a-x)>>n&&(b-y)>>n&&a-n<=b-n)
		 cout<<(a-n*b)<<endl;
		 
		
		if((a-x)>>n&&(b-y)<=n&&a-n>=b-y)
	      cout<<a*(b-y)<<endl;
	    	if((a-x)>>n&&(b-y)<=n&&a-n<=b-y)  
	       cout<<(a-n*b)<<endl;
	       
	      
	      
		if((a-x)<=n&&(b-y)>>n&&a-x>=b-n)
	       cout<<(a-x)*b<<endl;
        	if((a-x)<=n&&(b-y)>>n&&a-x<=b-n)
          cout<<a*b-y<<endl;	




		if((a-x)<=n&&(b-y)<=n&&a-x>=b-y)
		  cout<<a*(b-y)<<endl;
			if((a-x)<=n&&(b-y)<=n&&a-x<=b-y)
		cout<<a-x*b<<endl;
		
		
		if((a-x)==n&&(b-y)==n)
		cout<<(a-x)*b<<endl;
		
		
	}
}
