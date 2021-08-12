#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
	long long int n,s,i;  cin>>n>>s;
		
		for( i=0; 1 ; )
		{   long long int ds=0,k=n;
		        while(k)
				{ds=ds+k%10;
				  k=k/10;
				}
				
		       if(ds<=s)
			  { 
			     cout<<i<<endl;
			     break;
			  }
			i++;
			n++;	
			
		}		
		
	}
}
