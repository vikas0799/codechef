
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T;cin>>T;
  while(T--)
  {
     int n;cin>>n;
     string s;cin>>s;

     int a[n];
     for(int i=0;i<n;i++)
        a[i]=(int)s[i]-48;


      int b[n],sum=0;b[0]=1;
      if(a[0]==1)
      sum=2;
      else
      sum=1;

      for(int i=1;i<n;i++)
      {
        if(sum==2)
        {
          if(a[i]==1)
          {b[i]=0;sum=a[i]+b[i];continue;}
          if(a[i]==0)
          {b[i]=1;sum=a[i]+b[i];continue;}
        }
        if(sum==1)
        {
          if(a[i]==1)
          {b[i]=1;sum=a[i]+b[i];continue;}
          if(a[i]==0)
          {b[i]=0;sum=a[i]+b[i];continue;}
        }
        if(sum==0)
        {
          if(a[i]==1)
          {b[i]=1;sum=a[i]+b[i];continue;}
          if(a[i]==0)
          {b[i]=1;sum=a[i]+b[i];continue;}
        }

      
      }
      
      for(int i=0;i<n;i++)
          cout<<b[i];

          cout<<endl;
        
        
      
  }
}
