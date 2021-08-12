#include<bits/stdc++.h>
using namespace std; 
int main()
{
  int n;cin>>n;
 for(int i=n/2;i>=1;i--)
 {  
 	for(int j=2;j<=sqrt(i);j++)
 	{
 		if(i%j==0)
 		break;
 		else
 		{
 			if(j==(sqrt(i)))
 			{  cout<<i<<endl;
 				// i number is prime;
 				for(int k=2;k<=sqrt(n-i);k++)
 				{
 					if((n-i)%k==0) break;
 					else
 					if(k==(sqrt(n-i)))
 					cout<<i<<" "<<n-i;
				 }
			 }
			 
		 }
	 }
 }}
