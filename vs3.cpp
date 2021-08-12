#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
   long	int T;cin>>T;
	while(T--)
	{  long long int n,k;cin>>n>>k;
	  long long int a[n];
	   for(long long int i=0;i<n;i++)
	     cin>>a[i];
	     sort(a,a+n);
	     long long int flag=0,sum=0;int t=0;
	     for(long long int i=n-1;i>=0;i--)
	     {
	         sum=sum+a[i];
	         
	         if(sum>=k&&t==0)
	         {sum=0;t++;}
	         
	         flag++;
	         
	         if(sum>=k&&t==1)
	         break;
	     }
	     if(sum<k)
	     cout<<-1<<endl;
	     else
	     cout<<flag<<endl;
 }
    return 0;
	  
}