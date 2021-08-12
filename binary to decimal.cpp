#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p=0,x=0, n;
	cin>>n;
	int sum=0;
	while(n)
	{ 
	   
		p=n%10;
		n=n/10;
		sum=sum+p*pow(2,x);
		x++;
	}
	cout<<sum;
}
