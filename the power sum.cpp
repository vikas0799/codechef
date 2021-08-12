#include<bits/stdc++.h>
using namespace std;

int help(int x,int n,int start)
    {
    if(x<0||start>x)
        {
        return 0;
    }
    
    if(pow(start,n)==x)
        {
        return 1;
    }
    
    int a = help(x-pow(start,n),n,start+1);
    int b = help(x,n,start+1);
    return a+b;
    
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<< help(x,n,1)<<endl;
    return 0;
}
