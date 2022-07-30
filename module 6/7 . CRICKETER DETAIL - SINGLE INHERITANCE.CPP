#include<constream.h>
class cricketer
{
	public:
	char name[20];
	void crickdata()
	{
		cout<<"\nenter the name of cricketer : ";
		cin>>name;
	}
};
class batsman : public cricketer
{
	public:
	int runs,total;
	int avg_runs;

	void bat_run()
	{
		cout<<"\nenter the runs of batsman : ";
		cin>>runs;
	}
	void display1()
	{
		cout<<"  "<<name<<"\t\t"<<runs<<endl;
	}
	void tot_avg()
	{
		total=total+runs[i];
		avg_runs=total/5;
	}
	void display2()
	{
		cout<<"\nthe total runs of batsman is : "<<total;
		cout<<"\nthe average runs of batsman is : "<<avg_runs;
	}
};
void main()
{
	int i;
	clrscr();
	batsman bt[5];
	for(i=1;i<=5;i++)
	{
		bt[i].crickdata();
	}
	for(i=1;i<=5;i++)
	{
		bt[i].bat_run();
	}
	cout<<"\nthe information of five batsman is : ";
	cout<<"\n-----------------------";
	cout<<"\n  name    |    runs";
	cout<<"\n-----------------------\n";
	for(i=1;i<=5;i++)
	{
		bt[i].display1();
	}
	bt[i].tot_avg();
	bt[i].display2();
	getch();
}















