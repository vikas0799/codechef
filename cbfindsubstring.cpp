#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="i love apple juice apple brand also";
	
	
	cout<<"index value NOT number of element is ="<<s.find("apple")<<endl;
	int idx=s.find("juice");
	
string word="juice"; 
	int len=word.length();
	s.erase(idx,len);
	cout<<s;
	
	
}
