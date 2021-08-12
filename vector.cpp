#include<bits/stdc++.h>
using namespace std;
int main()
{ /*int n;cin>>n;
	vector<int>v(n);
	for(int i=0;i<v.size();i++)
	  {  int input;cin>>input;
	      v.push_back(input);
	  }
	cout<<v.size()<<v.capacity()<<endl;
	for(auto i:v)
	cout<<i;
	*/
	int n;cin>>n;
	vector<int>v(n,8);
	for(auto i:v)
	cout<<i<<endl;
	
	
	
	for(int i=0;i<n;i++)
	{cin>>v[i];cout<<v.capacity();}
	cout<<endl;
	
	
	sort(v.begin(),v.end());
	for(auto i:v)
	cout<<i<<endl;
}
