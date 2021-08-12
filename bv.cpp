#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int T;cin>>T;
   while(T--)
   {

   int n; cin>>n;
   int a[2*n];int temp,i,j,b[n];
   for(i=0;i<2*n;i++)
   cin>>a[i];
   
   	for(i=0;i<2*n;i++)
   cout<<a[i]<<" ";
   
   
    b[0]=a[0];
   for(i=0;i<2*n;i++)
   {
   	   temp=a[i];
   	 for(i=0;i<n;i++)
   	   { 
   	      if(temp!=b[i])
   	       { b[i]=temp; }
			  else
			   continue;
   	   	
	   }
	}

   
   
 }
}
