#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
   {
   	if(a.length()==b.length())
   	return a<b;
   	 return a.length()>b.length();
   }
int main()
{
	/*
	string s[10];
	for(int i=0;i<10;i++) getline(cin,s[i]);
	sort(s,s+10);//lexicographic sorting
	for(int i=0;i<10;i++)
	cout<<s[i]<<endl;

  string s2,s3;cin>>s2>>s3;  //lexographioccomprision mearns dictionary arragment
	                           // me last me jo ata haiu  vahi GEAT or BADA number hota hai
    if(s2>s3)
    cout<<"ist great than secont in lexographic oorder"<<endl;
    else
     cout<<"second great"<<endl;
  */
  
  
     string s3[10];
	for(int i=0;i<10;i++) getline(cin,s3[i]);
	sort(s3,s3+10,compare);
	
       for(int i=0;i<10;i++)
	cout<<s3[i]<<endl;



}
