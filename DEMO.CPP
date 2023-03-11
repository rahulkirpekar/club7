#include<iostream.h>
#include<conio.h>
class Employee
{
	// pure encapsulation - Data Security
	// class Object--->class Properties[private:] = 1) Dm's 2) Mf's
private:
	int id;
	char name[10];
	int salary;
	char dsgn[10];
public:
	void scanData();
	void dispData();
};
// scanData
// ::--[MemberOf/Scope resolution operator]
inline void Employee :: scanData()
{
	cout<<"\nEnter Id : " ;
	cin>>id;
	cout<<"\nEnter Name : " ;
	cin>>name;
	cout<<"\nEnter Salary : " ;
	cin>>salary;
	cout<<"\nEnter Dsgn : " ;
	cin>>dsgn;
}
// dispData
inline void Employee :: dispData()
{
	cout<<"\n"<<id<<"\t"<<name<<"\t"<<salary<<"\t"<<dsgn;
}
void main()
{
	Employee e[2];
	int i;
	clrscr();

	for(i=0;i<2;i++)
	{
		e[i].scanData();
	}
	for(i=0;i<2;i++)
	{
		e[i].dispData();
	}
	getch();
}






