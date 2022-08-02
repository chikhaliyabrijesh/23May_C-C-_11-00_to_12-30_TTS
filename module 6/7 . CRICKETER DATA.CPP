#include<constream.h>
class cricketer
{
	public:
	char name[20],i;
	void crickdata()
	{
	   for(i=0;i<5;i++)
	   {
		cout<<"\nenter the name of cricketer : ";
		cin>>name;
	   }
	}
};
class batsman : public cricketer
{
	public:
	int i,runs[5];
	int avg_runs;
	int total;
	void bat_run()
	{
		for(i=0;i<5;i++)
		{
		    cout<<"\nenter the runs of batsman : ";
		    cin>>runs[i];
		}
	}
	void display1()
	{
		for(i=0;i<5;i++)
		{
		   cout<<"  "<<name<<"\t\t"<<runs[i]<<endl;
		}
	}
	void tot_avg()
	{
		total=0;
		for(i=0;i<5;i++)
		{
		    total = total+runs[i];
		    avg_runs=total/5;
		}
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
	bt[i].crickdata();
	bt[i].bat_run();
	cout<<"\nthe information of five batsman is following : ";
	cout<<"\n----------------------------------------------------";
	cout<<"\n   name    |    runs";
	cout<<"\n----------------------------------------------------\n";
	bt[i].display1();
	bt[i].tot_avg();
	bt[i].display2();
	getch();
}



