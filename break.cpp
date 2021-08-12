#include<iostream>
using namespace std;
int main()
{
   int i;
   for(i=1;i<=10;i++)
   {
    for(int j=1;j<=3;j++)
     {
       cout<<j<<endl;
       if(j==2)
       break;
     }
   }
}
