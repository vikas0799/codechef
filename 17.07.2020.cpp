#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin>>T;
	while(T--)
	{
	
	int i,x,y,z,k, a[3];
	for(i=0;i<3;i++)
	cin>>a[i];
	x=a[0];y=a[1];z=a[2];
	sort(a,a+3);
	k=a[0];
	if(x==y&&y==z&&x==z)
	{
	cout<<"YES "<<endl;
	cout<<x<<" "<<y<<" "<<z<<endl;
    }
    
    if(k==a[0]&&k==a[1]&&k<a[2])
    cout<<"NO"<<endl;
    
    if(k==a[0]&&a[1]==a[2]&&k!=a[1])
   {
	 cout<<"YES "<<endl;
	cout<<k<<" "<<"1 "<<a[2]<<endl;
}
    if(a[0]!=a[1]&&a[0]!=a[2]&&a[1]!=a[2])
    cout<<"NO "<<endl;
}}
