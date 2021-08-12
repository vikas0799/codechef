#include<bits/stdc++.h>
using namespace std;
class Company
{
	int id; char name[20];
	public:
	void setdata();
	void display();
};

void Company::setdata()
{
	cout<<"enter id and name ";
	cin>>id>>name[20];
}

void Company::display()
{
	cout<<"emplyee id = "<<id<<" and name is = "<<name[20]<<endl; //getch(void);
}


int main()
{
	Company manager[20],HR[30];
	int i;
	for(i=0;i<5;i++)
	{
		manager[i].setdata();
	//	manager[i].display();
	}
}









