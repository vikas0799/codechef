#include<bits/stdc++.h>
using namespace std; 
int main()
{
	    int n;  cin>>n;
		int i,j,count=0;
    for(i=3  ;  n ; i++)
	{
	   count=0;
		for(j=2;j<i ;j++)
		{
			if(i%j==0)
			{
				count++; break;
			}
		}
		if(count==0)   
		    n--;
		if(n==0)
		    cout<<i<<" ";
	}
}
        
     
