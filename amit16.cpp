#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;  
      int n=s.length();  char a[n];int b[n];
       for(int i=0;i<n;i++)
         a[i]=s[i];
          sort(a,a+n);
         s=a; int k=0,j=0; cout<<s<<endl;
         
         for(int i=0;i<n-1;i++)
         {
         	if(s[i]==s[i+1]) k++;
         	else 
			 {
         		b[j]=k; k=0;j++;
			 }
			 if(s[i]==s[i+1]&&i==n-1)
			 b[j]=k;
		 }
		 
		 for(int i=0;i<n;i++)
		 cout<<b[i]<<endl;
		 
}
