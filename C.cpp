#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
   int T;cin>>T;
   while (T--){
      int a,b;cin>>a>>b;
      int res=b-a;
      int ans=ceil(double(b-a)/double(2));
      if(b==a)
      cout<<0<<endl;
      else{
         if((b-a)%2==0)
         {
            ans++;
            cout<<ans<<endl;
         }
         else{
            cout<<ans<<endl;
         }
      }
   
   }
}