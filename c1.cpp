#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T; cin>>T;
   while(T--)
   {
   	int  a,b,n,i,flag=0;
   	int count =0;  cin>>a >>b>>n;
	   
	for(i=1;a+b<=n;i++)
	   {      
               
               if(a+b==n)
               break;
	        if(a+b<n){
	   
	        	a=a+b;
	        	b=a+b;
	        	count++; 
               }
	   }
	   	 
    if(a+b<=n)
	   cout<<2*count;
	   if(a+b>n)
	   cout<<2*count+1;
   	}	
}
