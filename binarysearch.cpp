#include<bits/stdc++.h>
using namespace std;
 int bn(int v[10],int l,int r,int t)
	{
		
	   if(l>r) return -1;
	   else
	   {   int m=(l+r)/2;
	   	   if(v[m]==t)
	   	   return 1;
	   	   if(v[m]>t)
	   	   { r=m-1; return bn(v,l,r,t); }
	   	   if(v[m]<t)
	   	   { l=m+1;return bn(v,l,r,t); }
	   }
	   return -1;//why this is used
	}

int main()
{
	 int v[]={32,45,65 ,66,67,68,69,70,71,72};
   int l=0;int r=9;  int target=80;
  int k=bn( v,l,r,target);
  if(k==-1)cout<<"number is not present";
  else cout<<"number is present";
}

