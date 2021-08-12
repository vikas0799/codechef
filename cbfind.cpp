#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int arr[]={1,10,11,9,100};
	int n=sizeof(arr)/sizeof(int);
	cout<<&arr[5]-&arr[0]<<endl;//output is 5// auto must have initialiser
 auto key=0; cin>>key;
  auto it=find(arr,arr+n,key)-&arr[0];

  if(it>=n)
  cout<<"out of range";
  else
  cout<<"index value is a[it]="<<it<<endl;
  
  //
  vector <int>v={43,3434,765,444};
  cout<<v[3]<<endl;
  for(auto i:v)
  cout<<i<<endl;
  
  //arrays <int> a{433,5655,76,35};
  //for(auto i:a)
  //cout<<i<<endl;



}
