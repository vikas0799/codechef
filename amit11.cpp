#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,q;cin>>n>>t>>q;
	int a[n],b[q];
	int i,k;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=0;i<q;i++)cin>>b[i];
	while(t){
	    k=1;
	t--;
	   {//swaping ka code likhna hoga
	   // divide into three part
	   }
          for(i=n-k;i<n;i++)
          {  temp=a[i];
          a[i]=a[i-k];
          
          for(i=0;i<k;i++)
          a[i]=a[n-k+1-i-1];
          
           for(i=k;i<(n-k);i++)
            a[i]=a[i-k];
        }
          for(i=0;i<q;i++)
          cout<<a[i]<<endl; 
      
}
