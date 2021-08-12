#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,x,y;cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int flag=0;
        for(int i=0;i<n;i++)
         {      int sum=0;
             for(int j=i;j<n;j++)
             {  
                 
                 if(sum<x)
                 sum=sum+a[j];
                 if(sum>=x&&sum<=y)
                   {  flag++;
                       
                         if(i==0)
                          {cout<<0<<endl; break;}
                          
                          int l=j-i+1;
                       if(l<i)
                       cout<<l<<endl;
                       else
                       cout<<l-i<<endl;
                   }
                if(sum>y)
                break;
                  
             }
            if(flag==1)
            break;
         }
         if(flag==0)
         cout<<-1<<endl;
    }
}