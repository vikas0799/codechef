#include<bits/stdc++.h>  //prime or not 
using namespace std;
int main()
{
	int n ,flag=0;cin>>n;
	if(n==2)cout<<"prime";
	if(n>2)
	{ if(n%2==0) cout<<" not prime"<<endl;
	  else
	   {    int k=sqrt(n);
	       if(n>=9)
		  {
		   for(int i=3;i<=k;i=i+2)
	       {   	if(n%i==0) 
	    	    {  cout<<" NOT prime";break;  }
			    if(i==k||i==k-1)
	     	    cout<<" prime ";		
           }}
        else
         cout<<"prime";
	}}
	
}
