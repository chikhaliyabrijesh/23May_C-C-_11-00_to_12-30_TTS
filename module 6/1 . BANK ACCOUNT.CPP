#include<constream.h>
class bank
{
	public:
	char name[20];
	char acctype[20];
	int accno;
	int balance;

	void inputdata()
	{
		cout<<"\nenter the name of depositor : ";
		cin>>name;
		cout<<"\nenter the type of account : ";
		cin>>acctype;
		cout<<"\nenter the account number : ";
		cin>>accno;
		cout<<"\nenter a balance amount in the account : ";
		cin>>balance;
	}
	void deposit()
	{
		int depobal;
		cout<<"\nenter the amount to deposit : ";
		cin>>depobal;
		balance = balance+depobal;
		cout<<"\nyour new balance is : "<<balance;
	}
	void checkbal()
	{
		int withbal;
		cout<<"\n\nenter amount to withdraw : ";
		cin>>withbal;
		balance = balance-withbal;
		cout<<"\nthe amount after withdrawl is : "<<balance;
		cout<<"\n.......................................";
	}
	void display()
	{
		cout<<"\nthe name is : "<<name;
		cout<<"\nthe balance in the account is : "<<balance;
	}
};
void main()
{
	clrscr();
	bank bk;
	bk.inputdata();
	bk.deposit();
	bk.checkbal();
	bk.display();
	getch();
}