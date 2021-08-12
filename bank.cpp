                // ATM MACHINE SOFTWARE PROJECT OR  BANK MANAGMENT SOFTWARE  PROJECT
#include<bits/stdc++.h>
using namespace std;

class Bank
		{
	string name ,add;
	long int adhar,age,bal,depo,draw;
	public:
	    open_account(void);
	 	deposite_amount(int);
	  	withdraw_amount(int);
	  	display_account(void);
		
	
};
 Bank:: open_account()
{
	cout<<"Enter your  name "<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<"Enter your address"<<endl;
	getline(cin,add);
	cout<<"Enter your last 4 digit of Addhar number"<<endl;
	cin>>adhar;
	cout<<"Enter your age"<<endl;
	cin>>age;
	cout<<"Enter your Deposite money"<<endl;
	cin>>bal;
	cout<<"Your account is opened"<<endl;
}
Bank::deposite_amount(int k) 
{     depo=k;
    bal+=depo;	
    cout<<"Your money is deposited and your current balance is = "<<bal<<endl;
}

Bank::withdraw_amount(int k)
{    draw=k;
	bal-=draw;
	cout<<"Your transaction is successfull and your current balance is = "<<bal<<endl;
}

Bank ::display_account()
{
	cout<<"Your name is  = "<<name<<endl;
	cout<<"Your Address is = "<<add<<endl;
	cout<<"Your Adhar Number is =  XXXXXXXXX"<<adhar<<endl;
	cout<<"Your Age is = "<<age<<endl;
	cout<<"Your current account Balance is = "<<bal<<endl;
}




int main()
{
   cout<<"Enter your option"<<endl;
   cout<<"1.To open an account"<<endl;
   cout<<"2.To deposite money"<<endl;
   cout<<"3.To withdraw money"<<endl;
   cout<<"4.To display your accont information"<<endl;
   cout<<"5.To Exit"<<endl;
   int x,y, i;cin>>i;  if(i==5){ cout<<"Thank you for use of SBI banking services"<<endl;}
   
   Bank obj;     // ONLY FOR SINGLE USER WHICH FIRST OPEN ACCOUNT
   while(i!=5)
   {
   	switch(i){
	   
   		case 1:  obj.open_account()  ; break;
	   	case 2:  cout<<"Enter the amount which you want to deposite"<<endl;
	   	         cin>>x;
		         obj.deposite_amount(x);
		   break;
	   	case 3:cout<<"Enter the withdrawl amount"<<endl;
		         cin>>y;
				 obj.withdraw_amount(y);  break;
	   	case 4:obj.display_account();break;
	//	case 5:cout<<"5";break;
	   	default:cout<<"you have entered wrong option ,please select correct option"<<endl;
	   }
	cout<<endl<<"press the option which you want"<<endl;
    if(i!=5)
    cin>>i;
    if(i==5)
    {
	cout<<"THANKS FOR USE OF BANKING SEVICES "<<endl;
    break;
    }
	
  }
}
