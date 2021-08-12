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
  
   
   
    b[0]=a[0];
   for(i=0;i<2*n;i++)
   {
   	   temp=a[i];
   	 for(j=0;j<n;j++)
   	   { 
   	      if(temp!=b[j])
   	       { b[j]=temp;break;}

	   }
	  
	}
 
   	for(i=0;i<n;i++)
   cout<<b[i]<<" ";
   
   
 }
}
