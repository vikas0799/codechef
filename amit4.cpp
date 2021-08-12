#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int T;cin>>T;
	 while(T--)
	 {
		 int n;cin>>n;
		 int a[n],b[n];
		 for(int i=0;i<n;i++)
		  cin>>a[i];

		  for(int i=0;i<n;i++)
		   cin>>b[i];

		   if(n==2)
		   {
             if(a[0]>a[1])
			 {
				 if(b[0]==1)
				 cout<<2<<endl;
				 else
				 cout<<1<<endl;
			 }
			 else
			 {
				 cout<<0<<endl;
			 }
		   }
		   else
		   {
				 int s[n];
				 for(int i=0;i<n;i++)
				  s[i]=a[i]; 
				 sort(s,s+n);int pos=0,count=0;

				 for(int i=0;i<n;i++)
				 {
					 for(int j=0;j<n;j++)
					 {
						 if(s[i]==a[j])
						 {   
							 if(i==0)
							   {
								   pos=j;
								   break;
							   }
							
							 while(1)
							  {   
								  if(pos<j&&pos<n)
								  {pos=j;break;}
								  if(pos>j&&pos>n)
								  {pos=j;break;}
								  j=j+b[j];
								  count++;
								  
							  }
                                pos=j;
						 }

					 }
				 }
				 cout<<"ans="<<count<<endl;
			 }//enlse tak
		   
	 }      
}
