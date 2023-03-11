#include<iostream.h>
#include<conio.h>
class Employee
{
	int id;
	char name[50];
	float salary;
	char dsgn[50];
	char orgname[50];
public:
	inline void scan();
	inline void disp();
};
// :: - scope resolution operator - class---member
inline void Employee :: scan()
{
	cout<<"\nEnter Employee Id : ";
	cin>>id;
	cout<<"\nEnter Employee Name : ";
	cin>>name;
	cout<<"\nEnter Employee Salary : ";
	cin>>salary;
	cout<<"\nEnter Employee Dsgn : ";
	cin>>dsgn;
	cout<<"\nEnter Employee OrgName : ";
	cin>>orgname;
}
inline void Employee :: disp()
{
	cout<<"\n"<<id<<" "<<name<<" "<<salary<<" "<<dsgn<<" "<<orgname;
}
void main()
{
	Employee e[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		e[i].scan();
	}
	for(i=0;i<3;i++)
	{
		e[i].disp();
	}
	getch();
}
