#include<bits/stdc++.h>
using namespace std;
int main()
{    ios::sync_with_stdio(0);
    int T;cin>>T;
    while(T--)
    {
        int n;cin>>n;
        int count=0,b=0;
        for(int i=3;i<=n; )
         {
                  int flag=0;
                 for(int j=3;j<=sqrt(i); )
                {
                    if(i%j==0&&i!=j)
                     {flag++; break;}
                    j=j+2;
                } 
                if(flag==0)
                 { if(b==(i-2))
                    count++;
                   
                    b=i;
                  }
                i=i+2;
         }
    cout<<count<<endl;
   }
}