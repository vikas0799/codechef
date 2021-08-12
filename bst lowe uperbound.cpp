#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50,50,50,50,60,70};
	cout<<"index of lower="<<lower_bound(a,a+7,50)-a<<endl<<"index of upper "<<upper_bound(a,a+7,50)-a<<endl;
	cout<<"freaquancy of 52 in array is ="<<(upper_bound(a,a+7,51)-a)-(lower_bound(a,a+7,51)-a)<<endl;

  // binary_search in a SORTED array
  bool present=binary_search(a,a+7,30);
  if(present)cout<<"element is present"<<endl;
  else cout<<"element is NOT present";
         

}
