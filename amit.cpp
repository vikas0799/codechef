#include<bits/stdc++.h>
using  namespace std; 
int main()
{    
     	int T,n; cin>>T;  // T is Tth term in series
	
	  	if(T%2!=0)
		{    if(T==1||T==3)
	          cout<<"1 ";
			n=(T+1)/2-2;            	//	fabbnoic printing elements
	
	    	int s=0,k1=1,k2=1;
	      while(n--)
    	    {   
		     s=k1+k2;   k1=k2;	  k2=s;  
		    }
    	  cout<<s<<" ";
		}
		
		
		else
		{
			if(T==2)
	        cout<<"2 ";
			n=T/2-1;                //	prime printing elements
		
		int i,j,count=0;
         for(i=3  ;  n ; i++)
	        {
	         count=0;
		     for(j=2;j<i ;j++)
	        	{
		     	if(i%j==0)
		     	{   count++; break;  }
		        } 
		    if(count==0)   
		       n--;
		    if(n==0)
		      cout<<i<<" ";
	       }
		}
    }
