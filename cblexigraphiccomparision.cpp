#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s0="APPLE"; //apple is small than mango in lexographical order
	string s1="MANGO";
	cout<<s0.compare(s1)<<endl;//outpot is negative means s0 is smaller than s1; 0 pe equal and greater pe s0 great;
	if(s0>s1)cout<<"s0 is great";
	else
	    if(s0<s1)cout<<"s0 is small";
	    
		else//equall pe kya hoga
	    {
	    	cout<<"eqall";
		}
}
