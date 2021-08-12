#include<bits/stdc++.h>
using namespace std;
int pr(int x,int y)
{
int *p;

p=&x;
y=*p;
*p=1;
cout<<x<<" "<<y;	
}
int main()
{
	int x=1;
	int y=1;
	pr(x,y);
}
