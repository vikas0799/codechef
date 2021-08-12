#include<bits/stdc++.h>
using namespace std;
bool cmp(int a[], int b[])
{
    return (a[1]<b[1]);
}
int main()
{
    int n;cin>>n;
      int a[n][n];
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
     cin>>a[i][j];
    } 
    
     sort(a,a+n);
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
     cout<<a[i][j];
    } 

}