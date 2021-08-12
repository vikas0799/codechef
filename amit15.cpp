#include<bits/stdc++.h>  //prime or not 
using namespace std;
int main()
{
	int n ,flag=0;cin>>n;
	int k=n/2;

		for(int i=2;i<=n/4;i=i++)
	    {
	    	if(k%i!=0&&(n-k)%i!=0) 
	    	{  flag=k;break;  }
			 
	     	k--;
        }
        cout<<k<<" "<<n-k;
	

}
